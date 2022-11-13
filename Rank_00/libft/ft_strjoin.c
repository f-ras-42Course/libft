/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 10:43:00 by fras          #+#    #+#                 */
/*   Updated: 2022/10/27 01:15:50 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*ret;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	ret = malloc((s1len + s2len + 1) * sizeof(*ret));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1, s1len);
	ft_memcpy(ret + s1len, s2, s2len);
	ret[s1len + s2len] = '\0';
	return (ret);
}
