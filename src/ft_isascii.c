/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 13:29:12 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/06 13:29:23 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (true);
	else
		return (false);
}
