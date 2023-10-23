/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 19:06:09 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/23 20:23:22 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

/*
** The strrchr() function locates the last occurrence of c
** (converted to a char) in the string pointed to by s.
** The terminating null character is considered to be part of the string;
** therefore if c is `\0', the functions locate the terminating `\0'.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*found;
	char	*str;

	found = NULL;
	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			found = str;
		str++;
	}
	if (*str == (char)c)
		return (str);
	return (found);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strrchr("Hello", 'l'));
// 	return (0);
// }
