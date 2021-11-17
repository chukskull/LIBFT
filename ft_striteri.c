/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:05:46 by snagat            #+#    #+#             */
/*   Updated: 2021/11/13 10:43:16 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char	*s, void(*f)(unsigned int, char*))
{
	unsigned	int	i;

	i = 0;
	if ( !s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
