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
