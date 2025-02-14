/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pal_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:25:47 by imutavdz          #+#    #+#             */
/*   Updated: 2025/02/14 10:26:26 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "biggest_pal.h"

int ft_strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}
 void ft_putendl(char *str)
 {
 	ft_putstr(str);
 	ft_putchar('\n');
 }

 void ft_putstr(char *str)
 {
 	while (*str)
 		ft_putchar(*str++);
 }
 void ft_putchar(char c)
 {
 	write(1, &c, 1);
 }
 