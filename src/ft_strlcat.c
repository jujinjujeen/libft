/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 14:21:26 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/17 19:34:03 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

/*
** The strlcat() function appends the NUL-terminated string src to the end of
** dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating
** the result.
*/

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	int	count;

	count = 0;
	while (count < size)
	{
		if (src[count] != '\0')
		{
			dest[count] = src[count];
		}
		else
		{
			dest[count] = '\0';
		}
		count++;
	}

	return (count);
}
