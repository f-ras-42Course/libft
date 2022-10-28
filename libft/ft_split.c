/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 12:52:49 by fras          #+#    #+#                 */
/*   Updated: 2022/10/28 18:16:04 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	ret = malloc(strlenskipc(s, c) + 1);
	while (s[i])
	{
		if (s[i] != c)
			ret[j][k++] = s[i++];
		else
			j++;
	}
	return (ret);
}
