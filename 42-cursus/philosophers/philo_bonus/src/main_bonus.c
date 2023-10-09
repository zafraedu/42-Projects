#include "../include/philo_bonus.h"

int	main(int ac, char **av)
{
	// t_simu	*simu;
	// t_philo	*philo;
	if (ft_check_args(ac, av))
	{
		printf("argumentos mal\n");
		return (1);
	}
	else
		printf("argumentos bien\n");
	// if (ft_init(&philo, &simu, ac, av))
	// 	return (mem_free(philo, simu), ft_msg_error(ERR_SIMU), 1);
	// start_mural();
	// if (ft_simulation(philo, simu))
	// 	return (mem_free(philo, simu), ft_msg_error(ERR_SIMU), 1);
	// return (end_mural(simu), mem_free(philo, simu), 0);
}
