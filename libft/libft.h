/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/31 18:56:39 by fras          #+#    #+#                 */
/*   Updated: 2022/08/06 16:16:22 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

//typedefs

//prototypes
void  *ft_memset(void *s, int c, size_t n);
void  ft_bzero(void *s, size_t n);
void  *ft_memcpy(void *dest, const void *src, size_t n);
void  *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n);

#endif