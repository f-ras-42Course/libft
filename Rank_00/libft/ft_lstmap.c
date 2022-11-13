/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 21:09:10 by fras          #+#    #+#                 */
/*   Updated: 2022/11/12 13:30:07 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*firstnode;
	void	*ptr;

	if (!lst)
		return (NULL);
	ptr = (*f)(lst->content);
	if (!ptr)
		return (NULL);
	new = ft_lstnew(ptr);
	if (!new)
	{
		(*del)(ptr);
		return (NULL);
	}
	firstnode = new;
	while (lst->next)
	{
		lst = lst->next;
		ptr = (*f)(lst->content);
		new->next = ft_lstnew(ptr);
		new = new->next;
		if (!new)
		{
			(*del)(ptr);
			ft_lstclear(&firstnode, del);
			return (NULL);
		}
	}
	return (firstnode);
}
