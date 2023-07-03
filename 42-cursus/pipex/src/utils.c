#include "../inc/pipex.h"

char	*find_path(char **envp)
{
	while (ft_strncmp("PATH", *envp, 4))
		envp++;
	return (*envp + 5);
}

void	error_msg(char *err, int errnum)
{
	perror(err);
	exit(errnum);
}

void	error_msg_child(char *err, char *argv)
{
	write(2, err, ft_strlen(err));
	write(2, argv, ft_strlen(argv));
	write(2, "\n", 1);
}
