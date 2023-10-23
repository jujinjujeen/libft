/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 13:33:50 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/23 19:15:17 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"
#include "../libft.h"
/*
** The strlcpy() function copies up to size - 1 characters from the
** NUL-terminated string src to dst, NUL-terminating the result.
** Return value: The strlcpy() and strlcat() functions return the total
** length of the string they tried to create. For strlcpy() that means
** the length of src
*/

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	count;
	size_t	src_len;

	count = 0;
	src_len = ft_strlen(src);

	if (size == 0)
		return (src_len);
	while ((count < (size - 1)) && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (src_len);
}
