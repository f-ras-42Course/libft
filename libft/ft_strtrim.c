/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 19:28:31 by fras          #+#    #+#                 */
/*   Updated: 2022/10/26 19:47:37 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	s1size;

	s1size = ft_strlen(s1);
	ret = malloc((s1size + 1) * sizeof(*s1));
	s1size
}
