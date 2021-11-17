/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:28:09 by snagat            #+#    #+#             */
/*   Updated: 2021/11/17 01:48:44 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	if ( n == -2147483648)
	{
		write(fd, "2147483648", 11);
		return ;
	}
	if (n < 10 && n >= 0)
	{
		ft_putchar_fd('0' + n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * -1 , fd);
	}
}
int main()
{
	int fd;
	fd = open("omar.txt",O_RDWR | O_CREAT );
	ft_putnbr_fd(69,fd);

}