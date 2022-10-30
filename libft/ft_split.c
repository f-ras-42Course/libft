/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 12:52:49 by fras          #+#    #+#                 */
/*   Updated: 2022/10/30 21:01:07 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countc(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
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
	size_t	srclen;
    size_t	arrsize;

    i = 0;
    start = 0;
	len = 0;
    arrsize = (countc(s, c) + 1);
	srclen = (ft_strlen(s) + 1);
	if (srclen == arrsize)
		return (ft_calloc(1, sizeof(ret)));
    ret = malloc(sizeof(ret) * arrsize);
	if (!ret)
		return (NULL);
    while (i < arrsize)
    {
		while (s[len] != c && s[len])
			len++;
        ret[i] = ft_substr(s, start, len - start);
        while (s[start] != c && s[start])
            start++;
		start++;
		len++;
        i++;
    }
    return (ret);
}
