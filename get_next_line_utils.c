/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:25:02 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/19 11:54:41 by zzaoui           ###   ########.fr       */
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
 * ft_strjoin - Allocates a new string which is the result of concatenations
 *			of s1 and s2
 * @s1: the prefix string
 * @s2: the suffix string
 * Return: The new string, NULL otherwise.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = (char *) malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1) && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2) && s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
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
//char	*ft_find_line(char *buff, int *cursor, int readed)
char	*ft_find_line(char **buff, int readed)
{
//	int		i;
//	int		j;
//
//	if (buff == NULL)
//		return (NULL);
//	j = *cursor;
//	i = *cursor;
//	while (buff[i] != '\n' && buff[i] != EOF && i < *cursor + readed)
//		i++;
//	printf("[CURSOR] = {%d}\n", i);
//	*cursor = i + 1;
//
//	return (ft_strndup(buff, j, *cursor));
	(void) readed;
	int	i;
	int	j;
	char	*new_buff;

	if (buff == NULL)
		return (NULL);
	i = 0;
	j = 0;
	printf("FIND_LINE BUFF: %s\n", *buff);
	while ((*buff)[j] != '\n' && (*buff)[j] != EOF)
	{
		printf("%c - ", (*buff)[j]);
		j++;
	}
	while ((*buff)[j] == '\n')
		j++;
	new_buff = ft_strndup(*buff, 0, j);
	memmove(*buff, *buff + j, ft_strlen(*buff) - j + 1);

//	*buff = *(buff)[readed - j];
//	memmove(*buff, *(buff) + j, ft_strlen(*buff) - j);
//	(*buff)[ft_strlen(*buff) - j] = '\0';
	printf("STRLEN:::: %zu\n", ft_strlen(*buff));
	printf("{MOVED BUFF}: %s\n", *buff);
	return (new_buff);
}

/**
 * ft_strlen - calcuate the length of a string
 * @str: the string
 * Return: The length of str
 */
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
