/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 22:23:50 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/11/10 22:26:22 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	return (temp);
}
