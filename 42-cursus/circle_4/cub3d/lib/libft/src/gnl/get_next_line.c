/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:59 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:55:47 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static char	*ft_next_line(char *buffer)
{
	int		i;
	int		j;
	char	*leftover;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	leftover = ft_calloc_gnl(ft_strlen_gnl(buffer) - i + 1, sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
		leftover[j++] = buffer[i++];
	free(buffer);
	return (leftover);
}

static char	*ft_line(char *buffer)
{
	int		i;
	char	*line;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc_gnl(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		line[i] = '\n';
	return (line);
}

static char	*ft_read_line(int fd, char *buffer)
{
	char	*tmp;
	ssize_t	read_bytes;

	tmp = ft_calloc_gnl(BUFFER_SIZE + 1, sizeof(char));
	read_bytes = 1;
	while (read_bytes != 0 && !ft_strchr_gnl(buffer, '\n'))
	{
		read_bytes = read(fd, tmp, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buffer);
			free(tmp);
			return (NULL);
		}
		tmp[read_bytes] = '\0';
		buffer = ft_strjoin_gnl(buffer, tmp);
	}
	free(tmp);
	return (buffer);
}

/**
 * Lee la próxima línea de un descriptor de archivo.
 *
 * Esta función lee la próxima línea del archivo asociado con el descriptor de
 * archivo 'fd'. Cada vez que se llama a esta función, devuelve la siguiente
 * línea del archivo hasta que se alcance el final del archivo. La función
 * almacena el estado interno del archivo en 'buffer' para continuar desde donde
 * se detuvo la última vez. Cuando se ha leído una línea completa, la función
 * devuelve esa línea como una cadena de caracteres. Si no hay más líneas que
 * leer, la función devuelve NULL.
 *
 * @param fd  El descriptor de archivo del que se leerá la próxima línea.
 * @return    La próxima línea del archivo como una cadena de caracteres o NULL
 *            si no hay más líneas que leer o si ocurre un error.
 */
char	*get_next_line(int fd)
{
	static char	*buffer[FOPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer[fd] = ft_read_line(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = ft_line(buffer[fd]);
	buffer[fd] = ft_next_line(buffer[fd]);
	return (line);
}
