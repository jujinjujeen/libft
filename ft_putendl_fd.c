/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/05 20:50:03 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/05 20:50:34 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
/**
 * Outputs the string ’s’ to the given file
 * descriptor, followed by a newline.
*/
void	ft_putendl_fd(char *s, int fd)
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
		write(fd, "\n", 1);
	}
}
