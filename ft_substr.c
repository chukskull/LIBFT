/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:37:17 by snagat            #+#    #+#             */
/*   Updated: 2021/11/16 18:14:56 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*ptr;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		{
			ptr = (unsigned	char *)ft_strdup("");
			return((char *)ptr);
		}
		if (len < ft_strlen(s))
			ptr = malloc(len * sizeof(char) + 1);
		else
			ptr = malloc((ft_strlen(s) - start + 1)  * sizeof(char));
	i = start;
	j = 0;
	if (ptr == NULL)
	return (NULL);		
	while (i < start + len && j < len)
	{
		ptr[j++] = s[i++];
	}
	ptr[j] = 0;
	return	((char *)ptr);
}
