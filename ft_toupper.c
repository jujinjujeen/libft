/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 14:21:43 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/07 17:03:23 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** The toupper() function converts a lower-case letter to the corresponding
** upper-case letter.  The argument must be representable as an unsigned char
** or the value of EOF.
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
