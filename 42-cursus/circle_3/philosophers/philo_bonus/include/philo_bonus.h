#ifndef PHILO_BONUS_H
# define PHILO_BONUS_H

/*════════════════════════════ [  LIBS ] ═════════════════════════════════════*/

# include <fcntl.h>
# include <limits.h>
# include <pthread.h>
# include <semaphore.h>
# include <signal.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <sys/wait.h>
# include <time.h>
# include <unistd.h>

/*════════════════════════════ [  MACROS ] ═══════════════════════════════════*/
//error

# define ERR_ARG "Invalid number of arguments\n"
# define ERR_INT "Invalid int type\n"
# define ERR_SIMU "The simulation could not be initialized\n"

//error semáforos

# define ERR_SEM_OPEN "Error al abrir o crear el semáforo"
# define ERR_SEM_CLOSE "Error al cerrar el semáforo"
# define ERR_SEM_WAIT "Error al esperar el semáforo"
# define ERR_SEM_POST "Error al incrementar el semáforo"

//status

# define GOT_FORK "has taken a fork"
# define EATING "is eating"
# define SLEEPING "is sleeping"
# define THINKING "is thinking"
# define DIED "died"

/*══════════════════════════ [  STRUCTS ] ════════════════════════════════════*/

// Estructura que representa la simulación de los filósofos.
typedef struct s_simu
{
	int				nb_philo;
	time_t			time_die;
	time_t			time_eat;
	time_t			time_slp;

	int				died;
	pid_t			*pid;
	sem_t			*init;
	sem_t			*forks;
	sem_t			*death;
}					t_simu;

// Estructura que representa a un filósofo en la simulación.
typedef struct s_philo
{
	int				id;
	int				meals;
	int				t_last_meal;
	int				stamina;
	struct timeval	t_born;
	t_simu			*simu;
}					t_philo;
/*═════════════════════════ [  FUNCTIONS ] ═══════════════════════════════════*/

// routine.c
void				*ft_philo_routine(void *arg);

// check_args.c
int					ft_check_args(int ac, char **av);

// init.c
int					ft_init(t_simu *simu, t_philo *philo, int ac, char **av);

//routine_utils.c
void				ft_check_forks(t_philo *ph);
void				ft_eat(t_philo *ph);
int					ft_die(t_philo *ph);

// routine.c
void				*ft_philo_routine(void *arg);

// utils.c
int					ft_atoi(char *str);
void				ft_msg_error(char *str);
void				ft_print_status(t_philo *ph, char *str);
int					get_time_diff(struct timeval ta);
void				ft_usleep(t_philo *ph, int time);

//Doxygen - Format Document
#endif
