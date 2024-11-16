/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:30:45 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/16 17:16:34 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 42

# include <unistd.h>
# include <fcntl.h>

char	*ft_strndup(char *buff, int start, int finish);
char	*ft_find_line(char *buff, int *cursor);
#endif /* GET_NEXT_LINE_H */
