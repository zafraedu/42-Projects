#include "../inc/pipex.h"

void	free_parent(t_data *d)
{
	int	i;

	i = 0;
	while (d->cmd_path[i])
	{
		free(d->cmd_path[i]);
		i++;
	}
	free(d->cmd_path);
	close(d->fd_src);
	close(d->fd_dst);
}

void	close_pipe(t_data *d)
{
	close(d->fd_pipe[0]);
	close(d->fd_pipe[1]);
}

void	free_child(t_data *d)
{
	int	i;

	i = 0;
	if (d->cmd_args)
	{
		while (d->cmd_args[i])
		{
			free(d->cmd_args[i]);
			i++;
		}
		free(d->cmd_args);
	}
	if (d->cmd)
		free(d->cmd);
}
