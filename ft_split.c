/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:41:15 by snagat            #+#    #+#             */
/*   Updated: 2021/11/16 21:28:09 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_trigged(char	const	*s, char	c)
{
	int	i;
	int	j;
	int	trigged;

	i = 0;
	j = 0;
	trigged = 1;
	while (s[i])
	{
		if (s[i] == c)
			trigged = 1;
		else
		{
			if (trigged)
				j++;
			trigged = 0;
		}
	i++;
	}
	return (j);
}
static	int	c_wordbyword(char	const	*s, char	c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}
static char	*ft_alloccation(char	*s,char	c)
{
	char 	*ptr;
	int i;

	i = 0;
	ptr = (char *)malloc(c_wordbyword(s,c) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
char	**ft_free(char	**s, int i)
{
	i--;
	while (i >= 0)
		free(s[i--]);
	free(s);
	return (s);
}
char	**ft_split(char	const	*s, char	c)
{
	char	**d2;
	int	i;
	int j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	d2 = (char	**)malloc(ft_trigged(s,c) * sizeof(char *) + 1);
	if (d2 == NULL)
		return (NULL);
	while (s[i])
	{
		if(s[i] != c)
		{
			d2[j++] = ft_alloccation((char *)&s[i] ,c);
			if (d2 == NULL)
			{
				return (ft_free(d2, j - 1));
			}
			while (s[i + 1] && s[i + 1] != c)
					i++;
		}
		i++;
	}
	d2[j] = 0;
	return	(d2);
}
/*#include <stdio.h>
int main()
{
	int i;
	char **tab;

	tab = ft_split("split oussama hamza mohammed saleh ", ' ');

	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
*/