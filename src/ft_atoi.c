/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 13:36:06 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/17 19:21:02 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** The atoi() function converts the initial portion of the string
** pointed to by str to int representation.
*/

int	ft_atoi(char *str)
{
	int	minus_count;
	int	total;

	total = 0;
	minus_count = 0;
	while (*str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus_count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		total = (total * 10) + (*str - '0');
		str++;
	}
	if (minus_count % 2)
		return (-1 * total);
	return (total);
}
