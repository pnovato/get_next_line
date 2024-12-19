/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:19:50 by pnovato-          #+#    #+#             */
/*   Updated: 2024/12/04 15:07:34 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif 
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
char	*ft_get_line(int fd, char *line);
char	*ft_new_line(char *line);
char	*ft_next_line(char *line);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(char *str);
char	*ft_strjoin(char *s1, char *s2);

#endif