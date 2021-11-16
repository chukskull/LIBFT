/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:29:31 by snagat            #+#    #+#             */
/*   Updated: 2021/11/06 10:53:10 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//for evting overlqp there is a case
 //if u had this condition dest < src+size u need to start from the last and copying it

#include "libft.h"

void    *ft_memmove(void    *dest, const void   *src, size_t    len)
{
    unsigned char   *src3;
    unsigned char   *dest3;
    src3 = (unsigned char *) src;
    dest3 = (unsigned char *) dest;

    if (dest == NULL && src == NULL)
        return (NULL);
    if (dest < src)
    {
        ft_memcpy(dest, src, len);
    }
    else
        while (len--)
        {
            dest3[len] = src3[len];
        }
        return (dest);
}