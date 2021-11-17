/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:45:00 by snagat            #+#    #+#             */
/*   Updated: 2021/11/16 17:44:14 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		i = 1;
	}
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	long	nb;

	nb = n;
	i = ft_len(nb);
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	ptr = malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (nb < 0)
	{
		ptr[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		ptr[0] = '0';
	ptr[i--] = '\0';
	while (nb)
	{
		ptr[i--] = '0' + nb % 10;
		nb /= 10;
	}
	return (ptr);
}
