/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:33:44 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/20 14:22:58 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
int	nl_in(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*buff = NULL;
	char		*read_buff;
	int			count_read;
	char		*line;

	read_buff = malloc(BUFFER_SIZE + 2);
	if (read_buff == NULL)
		return (NULL);
	count_read = 1;
	line = NULL;
	while (!nl_in(buff) && count_read > 0)
	{
		count_read = read(fd, read_buff, BUFFER_SIZE);
		//free(read_buff);
		//if (!buff || *buff == '\0')
		//	return (NULL);
		//line = ft_find_line(&buff, 0);
		read_buff[count_read] = '\0';
		buff = ft_strjoin(buff, read_buff);
		// return (line);
	}
	free(read_buff);
	line = ft_find_line(&buff, count_read);
	//free(buff);
	return (line);
}
