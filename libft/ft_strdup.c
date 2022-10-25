/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 20:31:28 by fras          #+#    #+#                 */
/*   Updated: 2022/10/25 21:32:41 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	srcsize;
	char	*alloc;

	srcsize = ft_strlen(s) + 1;
	alloc = malloc(srcsize * sizeof(*alloc));
	if (!alloc)
		return (NULL);
	ft_strlcpy(alloc, s, srcsize);
	return (alloc);
}
