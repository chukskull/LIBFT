/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:33:16 by snagat            #+#    #+#             */
/*   Updated: 2021/11/17 17:51:43 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strccpy(char *s1, char *d)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		d[i] = s1[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

char	*ft_strdup(const char *s1)
{
	char	*p;

	p = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	ft_strccpy((char *)s1, p);
	return (p);
}
