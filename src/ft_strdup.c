/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 14:21:22 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/18 11:21:06 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "../libft.h"
/*
** The strdup() function allocates sufficient memory for a copy of
** the string s1, does the copy, and returns a pointer to it.
*/

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	len = ft_strlen((char *)s1);
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	ft_strlcpy(dup, (char *)s1, len);
	return (dup);
}
