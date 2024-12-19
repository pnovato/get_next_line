/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:22:06 by pnovato-          #+#    #+#             */
/*   Updated: 2024/12/04 17:08:31 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_get_line(int fd, char *line)
{
	char	*buffer;
	ssize_t	nbytes;

	nbytes = 1;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (!ft_strchr(line, '\n') && nbytes > 0)
	{
		nbytes = read(fd, buffer, BUFFER_SIZE);
		if (nbytes == -1)
		{
			free(buffer);
			free(line);
			return (NULL);
		}
		buffer[nbytes] = '\0';
		line = ft_strjoin(line, buffer);
	}
	free(buffer);
	return (line);
}

char	*ft_next_line(char *line)
{
	char	*aux;
	int		i;

	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	aux = malloc(sizeof(char) * (i + 2));
	if (!aux)
		return (NULL);
	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
	{
		aux[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
	{
		aux[i] = line[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

char	*ft_new_line(char *line)
{
	char	*aux;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (!line[i])
		return (NULL);
	aux = (char *)malloc(ft_strlen(line) - i);
	if (!aux)
		return (NULL);
	i++;
	while (line[i])
		aux[j++] = line[i++];
	aux[j] = '\0';
	return (aux);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*next;
	char		*temp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!line)
		line = ft_strdup("");
	line = ft_get_line(fd, line);
	if (!ft_strlen(line))
	{
		free(line);
		return (NULL);
	}
	if (!line || line[0] == '\0')
		return (NULL);
	next = ft_next_line(line);
	if (!next)
		return (NULL);
	temp = line;
	line = ft_new_line(line);
	free(temp);
	return (next);
}
