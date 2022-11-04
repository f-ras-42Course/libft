/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 16:36:00 by fras          #+#    #+#                 */
/*   Updated: 2022/11/04 18:38:13 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *ret;
	unsigned int i;

	i = 0;
	ret = malloc((ft_strlen(s) + 1) * sizeof(*ret));
	if (!ret)
		return (NULL);
	if (!s)
		return(ft_calloc(1, sizeof(char)));
	while (s[i])
	{
		ret[i] = (*f)(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
