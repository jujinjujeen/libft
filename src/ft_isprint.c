/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 13:30:07 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/17 19:29:45 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

/*
** The isprint() function tests for any printing character, including space
** (` ').  The value of the argument must be representable as an unsigned char
** or the value of EOF.
*/

bool	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (true);
	else
		return (false);
}
