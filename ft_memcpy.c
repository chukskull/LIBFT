/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:45:41 by snagat            #+#    #+#             */
/*   Updated: 2021/11/18 03:45:37 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*src2;
	unsigned char	*dst2;

	src2 = (unsigned char *) src;
	dst2 = (unsigned char *) dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
		*dst2++ = *src2++;
	return (dst);
}
