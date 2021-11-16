/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:14:57 by snagat            #+#    #+#             */
/*   Updated: 2021/11/06 15:58:03 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_strrchr(const char  *str,int  c)
{
    int     i;

		i = ft_strlen(str);
        while (i >= 0)
        {
                if (str[i] == c)
					return ((char *)&str[i]);
                i--;
		}
		if (c == 0)
		{
			return ((char *)&str[i]);
		}
		return (0);
}