/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 14:43:50 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/17 19:26:29 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

/*
** The isalpha() function tests for any character for which isupper(3) or
** islower(3) is true.  The value of the argument must be representable as
** an unsigned char or the value of EOF.
*/

bool	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (true);
	else
		return (false);
}
