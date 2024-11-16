/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:33:44 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/16 21:02:34 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buff = "";

	
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
