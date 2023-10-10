/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 14:21:26 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/10 18:14:19 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"



size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	int	count;

	count = 0;
	while (count < size)
	{
		if (src[count] != '\0')
		{
			dest[count] = src[count];
		}
		else
		{
			dest[count] = '\0';
		}
		count++;
	}

	return (count);
}
