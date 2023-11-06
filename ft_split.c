/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/05 18:44:30 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/06 14:40:16 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdlib.h>

static size_t	get_words_count(char const *s, char c)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (s[i] == '\0')
				return (count);
		}
		i++;
	}
	return (count);
}

static void	free_arr(char **str_arr, int last_i)
{
	int	i;

	i = 0;
	while ((i < last_i) && str_arr[i])
		free(str_arr[i++]);
	free(str_arr);
}

static char	*create_chunk(char *s, char c, int *pos)
{
	char	*chunk;
	int		i;
	int		j;

	i = *pos;
	while (s[i] == c)
		i++;
	j = i;
	while (s[j] != c && s[j] != '\0')
		j++;
	chunk = ft_substr(s, i, j - i);
	if (chunk == NULL)
		return (NULL);
	*pos = j;
	return (chunk);
}

/**
 * Allocates (with malloc(3)) and returns an array
 * of strings obtained by splitting ’s’ using the
 * character ’c’ as a delimiter. The array must end
 * with a NULL pointer.
*/
char	**ft_split(char const *s, char c)
{
	int		word_c;
	int		i;
	int		pos;
	char	**str_arr;

	if (s == NULL)
		return (NULL);
	word_c = get_words_count(s, c);
	str_arr = (char **)malloc(sizeof(char *) * (word_c + 1));
	if (str_arr == NULL)
		return (NULL);
	str_arr[word_c] = NULL;
	i = 0;
	pos = 0;
	while (i < word_c)
	{
		str_arr[i] = create_chunk((char *)s, c, &pos);
		if (str_arr[i] == NULL)
		{
			free_arr(str_arr, i);
			return (NULL);
		}
		i++;
	}
	return (str_arr);
}
