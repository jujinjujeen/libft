/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 20:40:01 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/06 14:40:16 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdlib.h>

/*
** Allocates (with malloc(3)) and returns a substring
** from the string ’s’.
** The substring begins at index ’start’ and is of
** maximum size ’len’.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	max_len;
	char	*result;
	int		i;

	max_len = ft_strlen(s) - start;
	if (max_len > len)
		max_len = len;
	result = malloc(sizeof(char) * (max_len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] && i < (int)max_len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
