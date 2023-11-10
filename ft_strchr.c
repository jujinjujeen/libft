/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 14:21:38 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/10 20:15:16 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

/*
** The strchr() function locates the first occurrence of c
** (converted to a char) in the string pointed to by s.
** The terminating null character is considered to be part of the string;
** therefore if c is `\0', the functions locate the terminating `\0'.
*/
char	*ft_strchr(const char *s, int c)
{
	char	*found;

	found = (char *)s;
	while (*found != '\0')
	{
		if (*found == (char)c)
			return (found);
		found++;
	}
	if (*found == (char)c)
		return (found);
	return (NULL);
}
