/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/23 19:46:12 by fras          #+#    #+#                 */
/*   Updated: 2022/10/24 01:31:46 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if(s1 == s2 || n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1)
	 i++;
	if (s1[i] > s2[i])
	 return (1);
	if (s1[i] < s2[i])
	 return (-1);
	else
		return (0);
}
