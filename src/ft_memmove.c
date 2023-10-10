/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 14:21:14 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/10 18:15:20 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"
#include "stdio.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d_str;
	char	*s_str;
	int		i;

	d_str = (char *)dest;
	s_str = (char *)src;
	if (s_str < d_str && (s_str + n) >= d_str)
	{
		i = n - 1;
		while (i >= 0)
		{
			d_str[i] = s_str[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d_str[i] = s_str[i];
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	whole[] = "12345678";
// 	char	*src = whole;
// 	char	*dest = whole + 3;

// 	ft_memmove((void *)dest, (void *)src, 5);
// 	printf("%s\n", whole);
// }
