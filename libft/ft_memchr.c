/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 09:59:19 by fras          #+#    #+#                 */
/*   Updated: 2022/10/25 13:50:07 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
