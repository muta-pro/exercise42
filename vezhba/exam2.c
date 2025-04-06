/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 00:10:34 by imutavdz          #+#    #+#             */
/*   Updated: 2025/04/03 02:31:40 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

void	fizzbuzz(int n)
{
	if (n % 3 == 0)
		ft_putchar("fiz");
	if (n % 5 == 0)
		ft_putchar("fizz");
	if ( n % 3 && n % 5 == 0)
		ft_putchar("fizzbuzz");
}
