/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:47:45 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/10 15:47:51 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

/*════════════════════════════ [  LIBS ] ═════════════════════════════════════*/

# include <limits.h>
# include <pthread.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
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
/*════════════════════════════ [  ENUMS ] ════════════════════════════════════*/

typedef enum e_mutexes
{
	M_PRINT,
	M_MEAL,
	M_DONE,
	M_DIED,
	M_NUM
}					t_mutexes;
/*══════════════════════════ [  STRUCTS ] ════════════════════════════════════*/

// Estructura que representa la simulación de los filósofos.
typedef struct s_simu
{
	int				nb_philo;
	time_t			time_die;
	time_t			time_eat;
	time_t			time_slp;
	int				must_eat;

	time_t			time_thk;
	time_t			time_start;
	int				done;
	int				died;
	pthread_mutex_t	*mutex;

}					t_simu;

// Estructura que representa a un filósofo en la simulación.
typedef struct s_philo
{
	int				id;
	time_t			last_meal;
	int				time_ate;
	int				f[2];
	pthread_mutex_t	*fork;
	t_simu			*simu;

}					t_philo;
/*═════════════════════════ [  FUNCTIONS ] ═══════════════════════════════════*/

int					ft_atoi(char *str);
void				ft_msg_error(char *str);
time_t				get_time(void);
//utils

void				ft_print(t_philo *philo, char *s);
int					is_done(t_philo *philo, int n);
int					is_died(t_philo *philo, int n);
//sim_utils

void				*p_routine(void *arg);
//simulation

int					ft_simulation(t_philo *philo, t_simu *simu);
//simulador

int					ft_init(t_philo **p, t_simu **s, int ac, char **av);
//init

int					ft_check_args(int ac, char **av);
//checkargs

// ╚ ╔ ╠ ═ ║ ╣ ╗ ╝ ╦ ╩  ╬ ╓ ╒ ╘ ╙ ╥ ╨
#endif
