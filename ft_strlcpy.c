/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:56:50 by snagat            #+#    #+#             */
/*   Updated: 2021/11/05 14:56:53 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned        int     ft_strlcpy(char *dest, char *src, unsigned int size)
{
        unsigned int    i;

        i = 0;
        if (size > 0)
        {
                while (src[i] != '\0' && i < (size - 1))
                {
                        dest[i] = src[i];
                        i++;
                }
                dest[i] = '\0';
        }
        return (ft_strlen(src));
}