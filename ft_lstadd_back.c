/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:54:14 by snagat            #+#    #+#             */
/*   Updated: 2021/11/17 01:06:17 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	if (!lst)
		return ;
	if (!(*lst))
		*lst = new;
	temp = ft_lstlast(*lst);
	temp ->next = new;
	new ->next = NULL;
}
int main()
{
	t_list *lana;
	t_list *del;
	t_list *rey;
	int *d;
	lana = malloc(sizeof(t_list));
	del = malloc(sizeof(t_list));
	rey = malloc(sizeof(t_list));

	int i = 1;
	int j = 2;
	int k = 3;

	lana->content = &i;
	del->content = &j;
	rey->content = &k;

	lana->next = del;
	del->next = rey;
	rey->next = NULL;

	ft_lstadd_back(&lana,rey);
	while (lana)
	{
	
	    d = lana->content;
		printf("%d", *d);
		lana = lana->next;
	}
	
}