/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 12:52:49 by fras          #+#    #+#                 */
/*   Updated: 2022/10/28 23:30:08 by fras          ########   odam.nl         */
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
	size_t    arrlen;
	size_t	start;
	size_t	len;

	i = 0;
	start = 0;
	len = 0;
	arrlen = (countc(s, c) + 1);
    ret = malloc(arrlen + 1);
	while (i < arrlen)
	{
		while (*s != c)
			len++;
		*ret = ft_substr(s, start, len);
		while (*s != c)
			start++;
		i++;
	}
	return (ret);
}

// Hallo Hallo Hallo Hallo

// 0 > 1 > 2 > 3 >  4


// char    **ft_split(char const *s, char c)
// {
//     char    **ret;
//     size_t    i;
//     size_t    start;
//     size_t    arrlen;
//     size_t    srclen;

//     i = 0;
//     start = 0;
//     arrlen = (countc(s, c) + 1);
//     srclen = (strlenskipc(s, c) + arrlen);
//     ret = malloc(arrlen + 1);
//     ret[i++] = ft_substr(s, start, c);
//     while (ret[i])
//     {
//         ret[i] = ft_substr(s, start, c);
//         while (s[start] != c)
//             start++;
//         i++;
//     }
//     return (ret);
// }
