/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:32:15 by snagat            #+#    #+#             */
/*   Updated: 2021/11/15 20:39:18 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list **lst)
{
	while (lst->next)
		lst = lst ->next;
	return(lst);
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


	new -> content  = &k;
	new -> next = NULL;
    ft_lstlast(&list);
    int *d;
    d = list -> content;
	printf("%d\n", *d);
}
