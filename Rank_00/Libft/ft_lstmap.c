/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 21:09:10 by fras          #+#    #+#                 */
/*   Updated: 2022/11/12 13:03:36 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap (t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *firstnode;

	if (!lst)
		return (NULL);
	new = ft_lstnew((*f)(lst->content));
	if (!new)
		return (NULL);
	firstnode = new;
	while (lst->next)
	{
		lst = lst->next;
		new->next = ft_lstnew((*f)(lst->content));
		new = new->next;
		if (!new)
		{
			ft_lstclear(&firstnode, del);
			return (NULL);
		}
	}
	return (firstnode);
}
