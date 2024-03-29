/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:29:31 by snagat            #+#    #+#             */
/*   Updated: 2021/11/18 04:58:32 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*src3;
	unsigned char	*dest3;

	src3 = (unsigned char *) src;
	dest3 = (unsigned char *) dest;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, len);
	else
		while (len--)
			dest3[len] = src3[len];
	return (dest);
}
