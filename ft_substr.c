/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 02:32:34 by fras          #+#    #+#                 */
/*   Updated: 2022/11/01 16:08:40 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		srclen;
	char		*ret;

	srclen = ft_strlen(s);
	if (start >= srclen || *s == 0)
		return (ft_calloc(1, sizeof(*ret)));
	srclen = ft_strlen(s + start);
	if (len > srclen)
	{
		ret = malloc((srclen + 1) * sizeof(*ret));
		if (!ret)
			return (NULL);
		ft_strlcpy(ret, s + start, (srclen + 1));
	}
	else
	{
		ret = malloc((len + 1) * sizeof(*ret));
		if (!ret)
			return (NULL);
		ft_strlcpy(ret, s + start, (len + 1));
	}
	return (ret);
}
