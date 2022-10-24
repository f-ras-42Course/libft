/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/23 18:06:34 by fras          #+#    #+#                 */
/*   Updated: 2022/10/24 12:33:42 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	s += ft_strlen(s);
	while (*s != c && s != ptr)
		s--;
	if (*s == c)
		return ((char *)s);
	else
		return (NULL);
}
