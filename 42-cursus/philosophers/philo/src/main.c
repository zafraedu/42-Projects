#include "../include/philo.h"

static void	mem_free(t_philo *philo, t_simu *simu);
static void	start_mural(void);
static void	end_mural(t_simu *simu);

int	main(int ac, char **av)
{
	t_simu	*simu;
	t_philo	*philo;

	if (ft_check_args(ac, av))
		return (1);
	if (ft_init(&philo, &simu, ac, av))
		return (mem_free(philo, simu), ft_msg_error(ERR_SIMU), 1);
	start_mural();
	if (ft_simulation(philo, simu))
		return (mem_free(philo, simu), ft_msg_error(ERR_SIMU), 1);
	return (end_mural(simu), mem_free(philo, simu), 0);
}

/**
 * Libera la memoria asignada para las estructuras de filósofos y simulación.
 *
 * Esta función libera la memoria asignada para las estructuras de filósofos y
 * simulación, incluyendo los mutexes utilizados en la simulación. Verifica si
 * los punteros a las estructuras y los mutexes son válidos antes de liberar la
 * memoria asociada a ellos.
 *
 * @param philo Puntero a la estructura del filósofo (t_philo).
 * @param simu  Puntero a la estructura de la simulación (t_simu).
 */
static void	mem_free(t_philo *philo, t_simu *simu)
{
	if (simu && simu->mutex)
		free(simu->mutex);
	if (simu)
		free(simu);
	if (philo && philo->fork)
		free(philo->fork);
	if (philo)
		free(philo);
}

/**
 * Esta función imprime el encabezado inicial del mural de la simulación de
 * filósofos.
 */
static void	start_mural(void)
{
	write(1, "\n", 1);
	printf("        ╔════════════════════╗    \n");
	printf(" ╔══════╣    Philosophers    ╠═══╗\n");
	printf(" ║      ╠════╦═══════════════╝   ║\n");
}

/**
 * Esta función imprime el pie de cierre del mural de la simulación de
 * filósofos.
*/
static void	end_mural(t_simu *simu)
{
	if (get_time() - simu->time_start > 9999)
		printf(" ╚═══════╩════╩═════════ZAFRAEDU═╝\n\n");
	else
		printf(" ╚══════╩════╩══════════ZAFRAEDU═╝\n\n");
}
