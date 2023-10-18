/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 14:20:51 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/18 10:44:47 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
/*
** The calloc() function contiguously allocates enough space
** for count objects that are size bytes of memory each and returns a pointer to
** the allocated memory.
** The allocated memory is filled with bytes of value zero.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void			*mem;
	unsigned char	*p;
	size_t			i;

	mem = malloc(count * size);
	if (mem == NULL)
		return (NULL);

	p = (unsigned char *)mem;
	i = 0;
	while (i < (count * size))
	{
		p[i] = 0;
		i++;
	}
	return (mem);
}
