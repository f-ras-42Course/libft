/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 21:09:10 by fras          #+#    #+#                 */
/*   Updated: 2022/11/13 20:50:04 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*mapnewnode(t_list *lst, void *(*f)(void *))
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = (*f)(lst->content);
	new->next = NULL;
	return (new);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*firstnode_new;

	if (!lst)
		return (NULL);
	new = mapnewnode(lst, f);
	if (!new)
		return (NULL);
	firstnode_new = new;
	while (lst->next)
	{
		lst = lst->next;
		new->next = mapnewnode(lst, f);
		new = new->next;
		if (!new)
		{
			ft_lstclear(&firstnode_new, del);
			return (NULL);
		}
	}
	return (firstnode_new);
}
