/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/31 18:52:27 by fras          #+#    #+#                 */
/*   Updated: 2022/08/01 19:37:59 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memset(void *s, int c, size_t n)
{
  size_t  i;
  unsigned char *ptr;

  i = 0;
  ptr = s;
  while(i < n)
    ptr[i++] = c;
  return(s);
}