/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:49:38 by snagat            #+#    #+#             */
/*   Updated: 2021/11/13 01:57:41 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s,char (*f)(unsigned int, char))
{
	char    *ptr;
	int     i;
	
	i = 0;
	if (!s)
		return(NULL);
	if(!(ptr = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(i,s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}