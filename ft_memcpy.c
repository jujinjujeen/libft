/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 14:21:10 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/18 11:24:47 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

/*
** The memcpy() function copies n bytes from memory area src to memory area dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d_str;
	char	*s_str;

	d_str = (char *)dest;
	s_str = (char *)src;
	while (n > 0)
	{
		*d_str = *s_str;
		s_str++;
		d_str++;
		n--;
	}
	return (dest);
}
