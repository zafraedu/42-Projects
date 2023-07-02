#ifndef PIPEX_H
# define PIPEX_H

/*---------------------------  Librerias  ------------------------------------*/
# include "../libft/inc/libft.h"
# include <errno.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/wait.h>

/*---------------------------   Errors  --------------------------------------*/
# define ERR_ARGS "Invalid argument count"
# define ERR_CMD ": command not found"
# define ERR_EXEC ": no such file or directory"
# define ERR_PIPE "Failed to open pipe"

/*---------------------------  Estructuras  ----------------------------------*/
typedef struct s_data
{
	int		fd_src;
	int		fd_dst;
	int		file_valid;
	int		fd_pipe[2];
	char	*var_path;
	char	**cmd_path;
	char	**cmd_args;
	char	*cmd;
	pid_t	pid_first;
	pid_t	pid_last;
	int		status;
}			t_data;

/*---------------------------  Funciones  ------------------------------------*/
//pipex

#endif
