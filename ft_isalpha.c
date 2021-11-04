/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:14:36 by snagat            #+#    #+#             */
/*   Updated: 2021/11/04 11:14:40 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char ch)
{
    return ( ch >= 'a' && ch <= 'z' || ch >='A' && ch <='Z');
}