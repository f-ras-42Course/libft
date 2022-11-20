/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 12:52:49 by fras          #+#    #+#                 */
/*   Updated: 2022/11/03 20:41:54 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_str(char const *s, char c);
static char		**splits_it(char **ret, char const *s, char c, size_t arrlen);
static char		**freeallocs(char **ret, size_t i);

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	arrlen;

	arrlen = count_str(s, c);
	ret = malloc(sizeof(char *) * (arrlen + 1));
	if (!ret)
		return (NULL);
	ret = splits_it(ret, s, c, arrlen);
	return (ret);
}

static size_t	count_str(char const *s, char c)
{
	size_t	i;

	i = 0;
	if (*s && *s != c)
	{
		i++;
		s++;
	}
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
			i++;
		s++;
	}
	return (i);
}

static char	**splits_it(char **ret, char const *s, char c, size_t arrlen)
{
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	start = 0;
	len = 0;
	while (i < arrlen)
	{
		while (s[start] == c && s[start])
			start++;
		while (s[len] == c && s[len])
			len++;
		while (s[len] != c && s[len])
			len++;
		ret[i] = ft_substr(s, start, len - start);
		if (!ret[i])
			return (freeallocs(ret, i));
		while (s[start] != c && s[start])
			start++;
		i++;
	}
	ret[i] = NULL;
	return (ret);
}

static char	**freeallocs(char **ret, size_t i)
{
	while (i--)
		free(ret[i]);
	free(ret);
	return (NULL);
}
