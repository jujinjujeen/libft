/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 13:27:08 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/10 22:10:43 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** The isdigit() function tests for a decimal digit character.
*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
