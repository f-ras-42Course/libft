/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 17:18:33 by fras          #+#    #+#                 */
/*   Updated: 2022/10/25 19:09:58 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *alloc;
	
	alloc = malloc(count * size);
	if (alloc)
		ft_bzero(alloc, count * size);
	return (alloc);
}
