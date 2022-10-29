/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 12:52:49 by fras          #+#    #+#                 */
/*   Updated: 2022/10/29 13:40:10 by fras          ########   odam.nl         */
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

	// static size_t	strlenskipc(char const *s, char c)
	// {
	// 	size_t	i;

	// 	i = 0;
	// 	while (*s)
	// 	{
	// 		s++;
	// 		if (*s != c)
	// 			i++;
	// 	}
	// 	return (i);
	// }


char    **ft_split(char const *s, char c)
{
    char	**ret;
    size_t	i;
    size_t	start;
	size_t	len;
    size_t	arrlen;

    i = 0;
    start = 0;
	len = 0;
    arrlen = (countc(s, c) + 1);
    ret = malloc(sizeof(ret) * arrlen);
    while (i < arrlen)
    {
		while (s[len] != c && s[len])
			len++;
        ret[i] = ft_substr(s, start, len);
        while (s[start] != c && s[start])
            start++;
		start++;
        i++;
    }
    return (ret);
}

    // size_t	srclen;
	// srclen = (strlenskipc(s, c) + arrlen);
