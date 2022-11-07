/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 01:03:06 by fras          #+#    #+#                 */
/*   Updated: 2022/11/07 01:23:36 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
	{
		if (lst->next)
			lst = lst->next;
		else
			break ;
	}
	return (lst);
}
