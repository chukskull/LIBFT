/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:03:09 by snagat            #+#    #+#             */
/*   Updated: 2021/11/15 20:25:49 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list  **lst,t_list *new)
{
	if(!lst || !new)
		return;	
	new -> next = *lst;
	*lst = new;
}
#include <stdio.h>
int main(void)
{
	t_list *new;
	t_list *list;
	t_list *hh;

	new = malloc(sizeof(t_list));
	list = malloc(sizeof(t_list));
	hh = malloc(sizeof(t_list));

	int i = 1;
	int j = 2;
	int k = 3;
	

	list ->content = &i;
	list ->next = hh;

	hh ->content = &j;
	hh -> next = NULL;

	new -> content  = &k;
	new -> next = NULL;

	int *d;
	ft_lstadd_front( &list, new);
	while (list)
	{
		d = list->content;
		printf("%d", *d);
		list= list ->next;
	}
	


}