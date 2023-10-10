/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 14:21:18 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/07 14:41:08 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h";

void	*memset(void *s, int c, size_t n) {
	char	*str;

	str = (char *)s;
	while (n > 0) {
		*str = c;
		str++;
		n--;
	}
	return (s);
}