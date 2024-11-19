/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:33:44 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/19 21:36:14 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buff = NULL;
	char	*read_buff;
	int		count_read;
	char	*line;

	read_buff = malloc(BUFFER_SIZE + 1);
	if (read_buff == NULL)
		return (NULL);
	count_read = read(fd, read_buff, BUFFER_SIZE);
	if (count_read < 0)
		return (NULL);
	//printf("COUNT READ: %d\n", count_read);
	//printf("READ BUFF: %s\n", read_buff);
	read_buff[count_read] = '\0';
	buff = ft_strjoin(buff, read_buff);
	//printf("BUFF: %s\n", buff);
	free(read_buff);
	line = ft_find_line(&buff, count_read);
	//printf("LINE: %s\n", line);
	return (line);
}

//char	*get_next_line(int fd)
//{
//	static char	buff[999999];
//	static int	cursor = 0;
//	static int	line_cursor = 0;
//	int			readed;
//	char		*line;
//
//	readed = read(fd, &buff[cursor], BUFFER_SIZE);
//	printf("[Readed : %d]\n", readed);
//	line = ft_find_line(buff, &line_cursor, readed);
//	cursor += readed;
//	return (line);
//}
