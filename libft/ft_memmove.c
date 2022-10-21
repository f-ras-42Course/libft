/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 10:24:35 by fras          #+#    #+#                 */
/*   Updated: 2022/10/19 14:09:25 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ptr1;
	const char	*ptr2;

	ptr1 = dest;
	ptr2 = src;
	if (dest == src)
		return (dest);
	if (dest < src)
		while (n--)
			*ptr1++ = *ptr2++;
	else
	{
		while (n)
		{
			ptr1[n - 1] = ptr2[n - 1];
			n--;
		}
	}
	return (dest);
}
