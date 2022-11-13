/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 15:02:35 by fras          #+#    #+#                 */
/*   Updated: 2022/10/31 22:13:08 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (needle[j] == haystack[i] && i < len)
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i - j);
			if (haystack[i] == '\0')
				return (NULL);
			if (needle[j] != haystack[i] && needle[j - 1] == haystack[i])
				j -= 1;
			else if (needle[j] != haystack[i])
				j = 0;
		}
		i++;
	}
	return (NULL);
}
