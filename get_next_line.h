/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:30:45 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/24 20:36:17 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif /* BUFFER_SIZE */

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>

char	*get_next_line(int fd);
char	*ft_strndup(char *buff, int start, int finish);
char	*ft_find_line(char **buff);
char	*ft_strjoin(char *s1, char const *s2);
size_t	ft_strlen(const char *str);

#endif /* GET_NEXT_LINE_H */
