/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:26:24 by snagat            #+#    #+#             */
/*   Updated: 2021/11/16 23:11:44 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	if (!lst)
		return(0);
	while (lst)
	{
		i++;
		lst = lst ->next;
	}
	return(i);
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
	hh -> next = new;


	new ->content  = &k;
	new ->next = NULL;
	int *d;
	d = list->content;

	printf("%d\n", *d);
}