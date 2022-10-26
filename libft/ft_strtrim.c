/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 19:28:31 by fras          #+#    #+#                 */
/*   Updated: 2022/10/27 01:17:58 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	s1size;
	size_t	i;

	i = 0;
	s1size = ft_strlen(s1) + 1;
	while (0 < s1size)
	{
		if (ft_strrchr(set, s1[s1size - 1]))
			s1size--;
		else
			break ;
	}
	while (i < s1size)
	{
		if (ft_strchr(set, s1[i]))
			i++;
		else
			break ;
	}
	s1size -= i - 1;
	ret = malloc (s1size * sizeof(*s1));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s1 + i, s1size);
	return (ret);
}
