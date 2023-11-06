/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/05 20:44:50 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/05 20:52:00 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

/**
 * Outputs the character ’c’ to the given file
 * descriptor.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
