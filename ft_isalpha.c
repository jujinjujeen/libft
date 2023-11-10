/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 14:43:50 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/10 22:09:56 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
** The isalpha() function tests for any character for which isupper(3) or
** islower(3) is true.  The value of the argument must be representable as
** an unsigned char or the value of EOF.
*/
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
