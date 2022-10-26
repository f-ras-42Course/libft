/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 02:32:34 by fras          #+#    #+#                 */
/*   Updated: 2022/10/26 10:55:25 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t dstlen)
{
	size_t		srclen;
	char		*ret;

	srclen = ft_strlen(s);
	if (start >= srclen || *s == 0)
	{
		ret = ft_calloc(1, sizeof(*ret));
		if (!ret)
			return (NULL);
	}
	else if (dstlen > srclen)
	{
		ret = malloc((srclen + 1) * sizeof(*ret));
		if (!ret)
			return (NULL);
		ft_strlcpy(ret, s + start, (srclen + 1));
	}
	else
	{
		ret = malloc((dstlen + 1) * sizeof(*ret));
		if (!ret)
			return (NULL);
		ft_strlcpy(ret, s + start, (dstlen + 1));
	}
	return (ret);
}
