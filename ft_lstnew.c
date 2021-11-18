/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:44:04 by snagat            #+#    #+#             */
/*   Updated: 2021/11/18 04:05:03 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelment;

	newelment = (t_list *)malloc(sizeof(t_list));
	if (!newelment)
		return (NULL);
	newelment->content = content;
	newelment->next = NULL;
	return (newelment);
}
