/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 13:36:06 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/05 21:11:14 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
/*
** The atoi() function converts the initial portion of the string
** pointed to by str to int representation.
*/

static int	handle_overflow(int sign)
{
	if (sign == 1)
		return (INT_MAX);
	else
		return (INT_MIN);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long int	total;

	total = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (total > (INT_MAX - (*str - '0')) / 10)
			return (handle_overflow(sign));
		total = (total * 10) + (*str - '0');
		str++;
	}
	return ((int)(total * sign));
}
