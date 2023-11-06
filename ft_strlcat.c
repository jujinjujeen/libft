/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 14:21:26 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/06 15:28:17 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"
#include "./libft.h"

/*
** The strlcat() function appends the NUL-terminated string src to the end of
** dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating
** the result.
*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	dest_len;
	size_t	src_len;

	count = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (size + src_len);
	while (count < (size - dest_len - 1) && src[count])
	{
		dest[dest_len + count] = src[count];
		count++;
	}
	dest[dest_len + count] = '\0';
	return (dest_len + src_len);
}
