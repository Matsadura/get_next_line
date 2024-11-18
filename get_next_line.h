/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:30:45 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/18 22:59:37 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 42

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>

char	*get_next_line(int fd);
char	*ft_strndup(char *buff, int start, int finish);
//char	*ft_find_line(char *buff, int *cursor, int readed);
char	*ft_find_line(char **buff, int readed);
char    *ft_strjoin(char const *s1, char const *s2);
size_t  ft_strlen(const char *str);

#endif /* GET_NEXT_LINE_H */
