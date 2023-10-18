/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 14:21:01 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/18 10:44:51 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/*
** The memchr() function locates the first occurrence of c
** (converted to an unsigned char) in string s.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	void	*found;

	p = (char *)s;
	while (n != 0)
	{
		if (c == *p)
		{
			found = (void *)p;
			return (found);
		}
		p++;
		n--;
	}
	return (NULL);
}
