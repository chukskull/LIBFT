/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:28:15 by snagat            #+#    #+#             */
/*   Updated: 2021/11/16 21:28:27 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//if character not found return NULL '0'
//if character found will be returened as the first to the end

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (c == 0)
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}
/*#include <stdio.h>
int main()
{
	char str[] = "Florida kilos";
	int c = 'a';
	char *s;
	s = ft_strchr(str,c);
	printf("%s", s);
}
*/