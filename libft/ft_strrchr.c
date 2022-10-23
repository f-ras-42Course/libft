/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/23 18:06:34 by fras          #+#    #+#                 */
/*   Updated: 2022/10/23 19:43:39 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	s += strlen(s);
	while (*s != c)
		s--;
	if (*s == c)
		return (s);
	else
		return (NULL);
}
