/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 02:32:34 by fras          #+#    #+#                 */
/*   Updated: 2022/10/26 09:48:50 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t dstlen)
{
	size_t		srclen;
	char		*alloc;

	srclen = ft_strlen(s);
	if (start >= srclen || *s == 0)
	{
		alloc = ft_calloc(1, sizeof(*alloc));
		if (!alloc)
			return (NULL);
	}
	else if (dstlen > srclen)
	{
		alloc = malloc((srclen + 1) * sizeof(*alloc));
		if (!alloc)
			return (NULL);
		ft_strlcpy(alloc, s + start, (srclen + 1));
	}
	else
	{
		alloc = malloc((dstlen + 1) * sizeof(*alloc));
		if (!alloc)
			return (NULL);
		ft_strlcpy(alloc, s + start, (dstlen + 1));
	}
	return (alloc);
}
