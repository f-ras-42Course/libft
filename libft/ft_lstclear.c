/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 02:08:17 by fras          #+#    #+#                 */
/*   Updated: 2022/11/07 03:10:43 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *oldlst;

	oldlst = *lst;
	(*del)((*lst)->content);
	while ((*lst)->next)
	{
		*lst = (*lst)->next;
		(*del)((*lst)->content);
		free (oldlst);
		oldlst = NULL;
		oldlst = *lst;
		if (!(*lst)->next)
			break ;
	}
	free (*lst);
	*lst = NULL;
}


// {
// 	ft_lstdelone(*lst, del);
// 	while ((*lst)->next)
// 	{
// 		*lst = (*lst)->next;
// 		ft_lstdelone(*lst, del);
// 		if (!(*lst)->next)
// 			break ;
// 	}
// 	*lst = NULL;
// }
