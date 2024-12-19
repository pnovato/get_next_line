/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:23:59 by pnovato-          #+#    #+#             */
/*   Updated: 2024/12/04 16:00:01 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s, int c)
{
	char	*ptr;

	if (s == NULL)
		return (NULL);
	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (char)c)
			return (&(*ptr));
		ptr++;
	}
	if ((char)c == '\0')
		return (&(*ptr));
	return (NULL);
}

char	*ft_strdup(char *str)
{
	int		n;
	int		i;
	char	*str2;

	n = 0;
	if (!str)
		return (NULL);
	while (str[n] != '\0')
		n++;
	str2 = malloc((n + 1) * sizeof(char));
	if (str2 == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		c;
	int		i;
	char	*aux;

	c = 0;
	i = 0;
	if (!s1)
		s1 = ft_strdup("");
	if (!s1 || !s2)
		return (NULL);
	if (ft_strlen(s1) + ft_strlen(s2) == 0)
		return (free(s1), NULL);
	aux = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!aux)
		return (free(s1), NULL);
	while (s1[c] != '\0')
	{
		aux[c] = s1[c];
		c++;
	}
	while (s2[i] != '\0')
		aux[c++] = s2[i++];
	aux[c] = '\0';
	free(s1);
	return (aux);
}
