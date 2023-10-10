/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 13:30:07 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/07 14:33:40 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (true);
	else
		return (false);
}