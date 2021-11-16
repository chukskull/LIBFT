/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:17:10 by snagat            #+#    #+#             */
/*   Updated: 2021/11/13 18:30:36 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
 
static char	*ft_stick(char	*s1, char *s2, char	*p)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	j = 0;
		while (s1[i])
		{
			p[k++] = s1[i++];
		}
		while (s2[j])
		{
				p[k++] = s2[j++];
		}
		p[k] = '\0';
		return (p);
}

char *ft_strjoin(char	const	*s1, char const	*s2)
{
	int		len;
	char	*p;
	int		lens1;
	int		lens2;

	if (!s1 && !s2)
		return (0);
	if(!s2)
		return (ft_strdup(s1));
	if (!s1)
		return (0);
	lens1 = ft_strlen(s1);
	lens2 =	ft_strlen(s2);
	len = lens1 + lens2;
	p = malloc(len * sizeof(char) + 1);
	if	(*s1 == '\0' && *s2 == '\0')
		return(0);
	if (p == NULL)
		return (NULL);

	return (ft_stick((char *)s1,(char *)s2,p));
}