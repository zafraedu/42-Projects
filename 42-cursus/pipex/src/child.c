#include "../inc/pipex.h"

static char	*build_cmd_path(char **cmd_path, char *cmd)
{
	char	*tmp;
	char	*cmd_res;
	int		i;

	i = 0;
	while (cmd[i])
	{
		if (cmd[0] == '.' || cmd[i] == '/')
			return (ft_strdup(cmd));
		i++;
	}
	while (*cmd_path)
	{
		tmp = ft_strjoin(*cmd_path, "/");
		cmd_res = ft_strjoin(tmp, cmd);
		free(tmp);
		if (access(cmd_res, 0) == 0)
			return (cmd_res);
		free(cmd_res);
		cmd_path++;
	}
	return (NULL);
}

void	child_first(t_data d, char **argv, char **envp)
{
	int	errnum;

	errnum = 0;
	dup2(d.fd_pipe[1], 1);
	close(d.fd_pipe[0]);
	dup2(d.fd_src, 0);
	d.cmd_args = ft_split(argv[2], ' ');
	d.cmd = build_cmd_path(d.cmd_path, d.cmd_args[0]);
	if (!d.cmd)
	{
		error_msg_child(d.cmd_args[0], ERR_CMD);
		errnum = 127;
	}
	else if (execve(d.cmd, d.cmd_args, envp) == -1)
	{
		error_msg_child(d.cmd, ERR_CMD);
		errnum = 127;
	}
	free_child(&d);
	if (errnum != 0)
		exit(errnum);
}

void	child_last(t_data d, int argc, char **argv, char **envp)
{
	int	errnum;

	errnum = 0;
	dup2(d.fd_pipe[0], 0);
	close(d.fd_pipe[1]);
	dup2(d.fd_dst, 1);
	d.cmd_args = ft_split(argv[argc - 2], ' ');
	d.cmd = build_cmd_path(d.cmd_path, d.cmd_args[0]);
	if (!d.cmd)
	{
		error_msg_child(d.cmd_args[0], ERR_CMD);
		errnum = 127;
	}
	else if (execve(d.cmd, d.cmd_args, envp) == -1)
	{
		error_msg_child(d.cmd, ERR_CMD);
		errnum = 127;
	}
	free_child(&d);
	if (errnum != 0)
		exit(errnum);
}
