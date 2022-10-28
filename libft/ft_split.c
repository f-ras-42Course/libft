/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 12:52:49 by fras          #+#    #+#                 */
/*   Updated: 2022/10/28 23:19:44 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countc(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		s++;
		if (*s == c)
			i++;
	}
	return (i);
}

static size_t	strlenskipc(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		s++;
		if (*s != c)
			i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	start;
	size_t	arrlen;
	size_t	srclen;

	i = 0;
	start = 0;
	arrlen = (countc(s, c) + 1);
	srclen = (strlenskipc(s, c) + arrlen);
	ret = malloc(countc(s, c) + 1);
	if (!**ret)
		return (NULL);
	else
		ret[arrlen] = NULL;
	while (**ret)
	{
		*ret = ft_substr(s, start, );
		while (*s != c)
			start++;
		ret++;
	}
	return (ret);
}

// Hallo Hallo Hallo Hallo

// 0 > 1 > 2 > 3 >  4
