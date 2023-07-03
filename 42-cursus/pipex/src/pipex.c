#include "../inc/pipex.h"

static void	get_src(t_data *d, char *argv)
{
	d->fd_src = open(argv, O_RDONLY);
	if (d->fd_src < 0)
	{
		perror(argv);
		d->file_valid = 0;
	}
	else
		d->file_valid = 1;
}

static void	get_dst(t_data *d, char *argv)
{
	d->fd_dst = open(argv, O_CREAT | O_RDWR | O_TRUNC, 0000644);
	if (d->fd_dst < 0)
		perror(argv);
}

static void	setup(t_data *d, int argc, char **argv, char **envp)
{
	get_src(d, argv[1]);
	get_dst(d, argv[argc - 1]);
	if (pipe(d->fd_pipe) < 0)
		error_msg(ERR_PIPE, 1);
	d->var_path = find_path(envp);
	d->cmd_path = ft_split(d->var_path, ':');
}

int	main(int argc, char **argv, char **envp)
{
	t_data	d;

	if (argc != 5)
		error_msg(ERR_ARGS, 1);
	setup(&d, argc, argv, envp);
	if (d.file_valid)
	{
		d.pid_first = fork();
		if (d.pid_first == 0)
			child_first(d, argv, envp);
	}
	d.pid_last = fork();
	if (d.pid_last == 0)
		child_last(d, argc, argv, envp);
	close_pipe(&d);
	if (d.file_valid)
		waitpid(d.pid_first, &d.status, 0);
	waitpid(d.pid_last, &d.status, 0);
	free_parent(&d);
	if (d.status >> 8 > 0)
		exit(d.status >> 8);
	return (0);
}
