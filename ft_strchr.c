/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:28:15 by snagat            #+#    #+#             */
/*   Updated: 2021/11/18 20:49:43 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//if character not found return NULL '0'
//if character found will be returened as the first to the end

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char) c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (c == 0)
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}
