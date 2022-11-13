/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/05 14:16:06 by fras          #+#    #+#                 */
/*   Updated: 2022/11/05 14:53:33 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	putnbr(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 10 && n >= 0)
	{
		putnbr(n + '0', fd);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		putnbr(n % 10 + '0', fd);
	}
	if (n < 0)
	{
		if (n == -2147483648)
			write(fd, "-2147483648", 11);
		else
		{	
			putnbr('-', fd);
			n *= -1;
			ft_putnbr_fd(n, fd);
		}
	}
}
