/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/05 17:59:48 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/05 18:28:30 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
/**
 * Allocates (with malloc(3)) and returns a new
 * string, which is the result of the concatenation
 * of ’s1’ and ’s2’.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		tot_length;
	char	*joined;
	char	*temp;
	int		i;

	tot_length = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(sizeof(char) * (tot_length + 1));
	if (joined == NULL)
		return (NULL);
	temp = joined;
	i = 0;
	while (s1[i])
	{
		*temp = s1[i++];
		temp++;
	}
	i = 0;
	while (s2[i])
	{
		*temp = s2[i++];
		temp++;
	}
	*temp = '\0';
	return (joined);
}
