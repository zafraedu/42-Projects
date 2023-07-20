#include "../inc/pipex.h"

void	err_msg(char *err_msg)
{
	perror(err_msg);
	exit(EXIT_FAILURE);
}

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
	ft_memfree_all(d->paths);
	ft_memfree_all(d->cmd_args);
	ft_memfree(cmd);
	ft_memfree(d);
}
