/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 13:36:06 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/06 15:57:51 by ydidenko      ########   odam.nl         */
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
	char		*it_str;

	total = 0;
	sign = 1;
	it_str = (char *)str;
	while ((*it_str >= 9 && *it_str <= 13) || *it_str == 32)
		it_str++;
	if (*it_str == '-' || *it_str == '+')
	{
		if (*it_str == '-')
			sign = -1;
		it_str++;
	}
	while (*it_str >= '0' && *it_str <= '9')
	{
		if (total > (INT_MAX - (*it_str - '0')) / 10)
			return (handle_overflow(sign));
		total = (total * 10) + (*it_str - '0');
		it_str++;
	}
	return ((int)(total * sign));
}
