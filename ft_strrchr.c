/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/23 18:06:34 by fras          #+#    #+#                 */
/*   Updated: 2022/10/25 14:28:27 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	s += ft_strlen(s);
	while (*s != (char)c && s != ptr)
		s--;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
