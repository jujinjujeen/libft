/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/05 20:48:47 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/05 20:49:14 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

/**
 * Outputs the string ’s’ to the given file
 * descriptor.
*/
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != 0)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}
