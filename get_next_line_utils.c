/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:25:02 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/16 18:02:12 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * ft_strndup - duplicates a string
 * @buff: the buffer that contains the string
 * @start: the start index of the string
 * @finish: the finish index of the string
 * Return: the duplicated string
 */
char	*ft_strndup(char *buff, int start, int finish)
{
	char	*str;
	int		i;

	if (buff == NULL)
		return (NULL);
	str = (char *) malloc(finish - start + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i + start < finish)
	{
		str[i] = buff[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/**
 * ft_find_line - Finds a line that ends with '\n' or EOF
 * @buff: the buffer to search in
 * @cursor: the cursor of the current \n
 * Return: the line
 */
char	*ft_find_line(char *buff, int *cursor, int readed)
{
	int		i;
	int		j;

	if (buff == NULL)
		return (NULL);
	j = *cursor;
	i = *cursor;
	while (buff[i] != '\n' && buff[i] != EOF && i < *cursor + readed)
		i++;
	printf("[CURSOR] = {%d}\n", i);
	*cursor = i + 1;

	return (ft_strndup(buff, j, *cursor));

}
