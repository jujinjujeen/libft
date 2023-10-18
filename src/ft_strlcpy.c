/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 13:33:50 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/18 11:18:48 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

/*
** The strlcpy() function copies up to size - 1 characters from the
** NUL-terminated string src to dst, NUL-terminating the result.
** Return value: The strlcpy() and strlcat() functions return the total
** length of the string they tried to create. For strlcpy() that means
** the length of src. For strlcat() that means the initial length of dst
** plus the length of src.
*/

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	count;

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
