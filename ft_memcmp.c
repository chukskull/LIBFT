/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:46:03 by snagat            #+#    #+#             */
/*   Updated: 2021/11/17 20:08:38 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s3;
	unsigned char	*s4;

	s3 = (unsigned char *) s1;
	s4 = (unsigned char *) s2;
	if (n == 0 || s1 == s2)
		return (0);
	while (n--)
	{
		if (*s3 != *s4)
			return (*s3 - *s4);
		if (n)
		{
			s3++;
			s4++;
		}
	}
	return (0);
}
