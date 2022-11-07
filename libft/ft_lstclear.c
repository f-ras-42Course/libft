/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 02:08:17 by fras          #+#    #+#                 */
/*   Updated: 2022/11/07 20:53:03 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*prevnode;

	if (!*lst)
		return ;
	prevnode = *lst;
	(*del)((*lst)->content);
	while ((*lst)->next)
	{
		*lst = (*lst)->next;
		(*del)((*lst)->content);
		free (prevnode);
		prevnode = NULL;
		prevnode = *lst;
		if (!(*lst)->next)
			break ;
	}
	free (*lst);
	*lst = NULL;
}
