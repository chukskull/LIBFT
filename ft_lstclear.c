/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:08:02 by snagat            #+#    #+#             */
/*   Updated: 2021/11/15 21:27:53 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **list, void(*del)(void*))
{
   t_list *head;
   t_list *temp;

   head = *list;
   while (head)
   {
	   temp = head;
	   head = head->next;
	   ft_lstdelone(temp, del);
   }
   *list = 0;
}