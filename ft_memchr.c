/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:12:49 by snagat            #+#    #+#             */
/*   Updated: 2021/11/06 21:42:19 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned    char *ptr;

    ptr = (unsigned char *) s;
    while (n--)
    {
        if ((*ptr) == (unsigned char ) c)
        {
            return (ptr);
        }
            ptr++;

    }
    return(0);
}