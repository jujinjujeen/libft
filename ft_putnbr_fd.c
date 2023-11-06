/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/05 20:53:06 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/05 20:53:28 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

/**
 * Outputs the integer ’n’ to the given file
 * descriptor.
*/
void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = nbr * (-1);
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	nbr = nbr % 10 + 48;
	write(fd, &nbr, 1);
}
