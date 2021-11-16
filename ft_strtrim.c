/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:42:19 by snagat            #+#    #+#             */
/*   Updated: 2021/11/09 16:09:20 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static    size_t    ft_find_last(char const *s1, char const    *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (i >= 0 && ft_in_set(set, s1[i]))
		i--;
	return (i);
}
static    size_t    ft_find_start(char const    *s1, char const        *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s1) && ft_in_set(set, s1[i]))
		i++;
	return (i);
}
char    *ft_strtrim(char    const *s1, char    const *set)
{
	char    *ptr;
	size_t        first;
	size_t        last;
	size_t        i;
	size_t        len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	first = ft_find_start(s1,set);
	if (first >= ft_strlen(s1))
	  return (ft_strdup(""));
	last = ft_find_last(s1,set);
	len = (last - first ) + 1;
	ptr = malloc(len * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	while (first <= last)
		ptr[i++] = s1[first++];
	ptr[i] = 0;
	return (ptr);
}
