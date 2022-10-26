/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 19:28:31 by fras          #+#    #+#                 */
/*   Updated: 2022/10/26 21:44:07 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	s1size;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	s1size = ft_strlen(s1) + 1;
	while (s1[i] && set[j])
		if (!ft_strrchr(s1, set[j]))
			j++;
		else
			i++;
			j = 0;
	s1size -= i;
	i = 0;
	while (s1[i] && set[j])
		if (!ft_strchr(s1, set[j]))
			j++;
		else
			i++;
			j = 0;
	ret = malloc(s1size * sizeof(*s1));
	if (!ret)
		(NULL);
	ft_strlcpy(ret, s1, s1size);
	return (ret);
}
