/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 14:21:43 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/07 14:33:14 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c = c - 32);
	}
	else
	{
		return (c);
	}
}