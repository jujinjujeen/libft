/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 13:27:08 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/17 19:29:16 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

/*
** The isdigit() function tests for a decimal digit character.
*/

bool	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (true);
	else
		return (false);
}
