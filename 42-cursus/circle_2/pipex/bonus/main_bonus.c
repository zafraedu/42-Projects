#include "../inc/pipex_bonus.h"

void	parent(t_data *d)
{
	waitpid(d->pid, NULL, 0);
	close(d->pipe_fd[1]);
	dup2(d->pipe_fd[0], STDIN_FILENO);
}

void	children(t_data *d, char *cmd, char **envp)
{
	if (pipe(d->pipe_fd) < 0)
		err_msg(ERR_PIPE);
	d->pid = fork();
	if (d->pid < 0)
		err_msg(ERR_FORK);
	else if (d->pid == 0)
	{
		close(d->pipe_fd[0]);
		dup2(d->pipe_fd[1], STDOUT_FILENO);
		exec(d, cmd, envp);
	}
	else
		parent(d);
}

void	here_doc(t_data *d, char *limiter, int argc)
{
	if (argc < 6)
		err_msg(ERR_ARGC);
	if (pipe(d->pipe_fd) < 0)
		err_msg(ERR_PIPE);
	d->pid = fork();
	if (d->pid < 0)
		err_msg(ERR_FORK);
	else if (d->pid == 0)
	{
		close(d->pipe_fd[0]);
		ft_putstr_fd("heredoc> ", 1);
		d->str = get_next_line(0);
		while (ft_strncmp(d->str, limiter, ft_strlen(d->str)) != '\n')
		{
			ft_putstr_fd("heredoc> ", 1);
			ft_putstr_fd(d->str, d->pipe_fd[1]);
			d->str = get_next_line(0);
		}
		exit(EXIT_SUCCESS);
	}
	parent(d);
}

int	main(int argc, char **argv, char **envp)
{
	t_data	d;

	if (argc < 5)
		err_msg(ERR_ARGC);
	if (ft_strncmp(argv[1], "here_doc", 8) == 0)
	{
		d.i = 2;
		d.dst_fd = open_fd(argv[argc - 1], 3);
		here_doc(&d, argv[2], argc);
	}
	else
	{
		d.i = 1;
		d.src_fd = open_fd(argv[1], 1);
		d.dst_fd = open_fd(argv[argc - 1], 2);
		dup2(d.src_fd, STDIN_FILENO);
	}
	while (++d.i < argc - 2)
		children(&d, argv[d.i], envp);
	dup2(d.dst_fd, STDOUT_FILENO);
	exec(&d, argv[argc - 2], envp);
	return (0);
}
