/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:53:35 by snagat            #+#    #+#             */
/*   Updated: 2021/11/18 05:31:44 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	tol;
	size_t	lengthsrc;

	i = 0;
	lengthsrc = ft_strlen(src);
	tol = ft_strlen(dest);
	if (size > 0)
	{
		while (src[i] != '\0' && i + tol < size - 1)
		{
			dest[tol + i] = src[i];
			i++;
		}
		dest[tol + i] = '\0';
	}
	if (size > tol)
	{
		return (tol + lengthsrc);
	}
	else
	{
		return (size + lengthsrc);
	}
}
