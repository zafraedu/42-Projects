#include "../inc/pipex_bonus.h"

static char	*find_path(char **envp)
{
	while (ft_strncmp("PATH", *envp, 4))
		envp++;
	return (*envp + 5);
}

static char	*get_cmd(char **paths, char *cmd)
{
	char	*tmp;
	char	*command;

	while (*paths)
	{
		tmp = ft_strjoin(*paths, "/");
		command = ft_strjoin(tmp, cmd);
		free(tmp);
		if (access(command, X_OK) == 0)
			return (command);
		free(command);
		paths++;
	}
	return (NULL);
}

void	exec(t_data *d, char *cmd, char **envp)
{
	char	*path_var;

	path_var = find_path(envp);
	d->paths = ft_split(path_var, ':');
	d->cmd_args = ft_split(cmd, ' ');
	d->cmd = get_cmd(d->paths, d->cmd_args[0]);
	if (!d->cmd)
		err_msg(ERR_CMD);
	execve(d->cmd, d->cmd_args, envp);
}

int	open_fd(char *file, int n)
{
	int	fd;

	fd = 0;
	if (n == 1)
		fd = open(file, O_RDONLY, 0644);
	else if (n == 2)
		fd = open(file, O_RDWR | O_CREAT | O_TRUNC, 0644);
	else if (n == 3)
		fd = open(file, O_RDWR | O_CREAT | O_APPEND, 0644);
	if (fd < 0)
		err_msg(file);
	return (fd);
}

void	err_msg(char *err_msg)
{
	perror(err_msg);
	exit(EXIT_FAILURE);
}
