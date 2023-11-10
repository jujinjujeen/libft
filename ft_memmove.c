/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 14:21:14 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/10 22:13:50 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void static	copy_elements(char *d_str, char *s_str, int n, int reverse)
{
	int	i;

	if (reverse)
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
		while (i < (int)n)
		{
			d_str[i] = s_str[i];
			i++;
		}
	}
}

/*
** The memmove() function copies n bytes from memory area src
** to memory area dest.
** The memory areas may overlap: copying takes place as though the bytes in src
** are first copied into a temporary array that does not overlap src or dest,
** and the bytes are then copied from the temporary array to dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d_str;
	char	*s_str;

	if (!dest && !src)
		return (dest);
	d_str = (char *)dest;
	s_str = (char *)src;
	if (s_str < d_str && (s_str + n) >= d_str)
	{
		copy_elements(d_str, s_str, n, 1);
	}
	else
	{
		copy_elements(d_str, s_str, n, 0);
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
