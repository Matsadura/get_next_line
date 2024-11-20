/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:33:44 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/20 20:42:08 by zzaoui           ###   ########.fr       */
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

int	check_count(int count_read, char **read_buff, char **buff)
{
	if (count_read < 0)
	{
		free(*read_buff);
		free(*buff);
		*buff = NULL;
		return (-1);
	}
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*buff;
	char		*read_buff;
	int			count_read;
	char		*line;
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (buff == NULL)
	{
		buff = malloc(1);
		if (buff == NULL)
			return (NULL);
		buff[0] = '\0';
	}
	read_buff = malloc(BUFFER_SIZE + 1);
	if (!read_buff)
	{
		free(buff);
		buff = NULL;
		return (NULL);
	}
	count_read = 1;
	line = NULL;
	while (!nl_in(buff) && count_read > 0)
	{
		count_read = read(fd, read_buff, BUFFER_SIZE);
		if (check_count(count_read, &read_buff, &buff) == -1)
			return (NULL);
		if (count_read == 0)
			break ;
		read_buff[count_read] = '\0';
		tmp = ft_strjoin(buff, read_buff);
		if (tmp == NULL)
		{
			free(read_buff);
			free(buff);
			buff = NULL;
			return (NULL);
		}
		buff = tmp;
	}
	//	if (!buff)
	//	{
	//		free(read_buff);
	//		return (NULL);
	//	}
	free(read_buff);
	line = ft_find_line(&buff, count_read);
	if (*buff == '\0')
	{
		free(buff);
		buff = NULL;
	}
	return (line);
}
