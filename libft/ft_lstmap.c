/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 21:09:10 by fras          #+#    #+#                 */
/*   Updated: 2022/11/07 22:01:43 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap (t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *firstnode;
	t_list *new;
	t_list *oldnode;

	if (!lst)
		return (NULL);
	firstnode = ft_lstnew((*f)(lst->content));
	if (!firstnode)
		return (NULL);
	new = firstnode;
	oldnode = lst;
	while (lst->next)
	{
		lst = lst->next;
		new = new->next;
		ft_lstadd_back(&new, ft_lstnew((*f)(lst->content)));
		if (!new)
		{
			ft_lstclear(&firstnode, del);
			return (NULL);
		}
	}
	ft_lstclear(&oldnode, del);
	return (firstnode);
}
