#ifndef PHILO_H
# define PHILO_H

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
# include <sys/stat.h>
# include <sys/time.h>
# include <sys/wait.h>
# include <time.h>
# include <unistd.h>
/*════════════════════════════ [  MACROS ] ═══════════════════════════════════*/
//error

# define ERR_ARG "Invalid number of arguments\n"
# define ERR_INT "Invalid int type\n"
# define ERR_SIMU "The simulation could not be initialized\n"

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
}		t_simu;

// Estructura que representa a un filósofo en la simulación.
typedef struct s_philo
{
}		t_philo;
/*═════════════════════════ [  FUNCTIONS ] ═══════════════════════════════════*/

int		ft_check_args(int ac, char **av);
//check_args

int		ft_atoi(char *str);
void	ft_msg_error(char *str);
// time_t	get_time(void);
//utils
#endif
