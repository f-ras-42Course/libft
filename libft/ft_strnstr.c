/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 15:02:35 by fras          #+#    #+#                 */
/*   Updated: 2022/10/24 17:26:12 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle || !*haystack)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (needle[j] == haystack[i] && i < len)
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i - j);
		j = 0;
		i++;
	}
	return (NULL);
}
