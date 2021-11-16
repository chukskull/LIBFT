/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:54:14 by snagat            #+#    #+#             */
/*   Updated: 2021/11/15 21:00:01 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstaddback(t_list **lst, t_list *new)
{
    t_list *temp;
    temp = *lst;

    while (temp ->next)
        temp = temp->next;
    temp ->next = new;
}