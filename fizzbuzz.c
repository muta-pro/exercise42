/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:25:06 by imutavdz          #+#    #+#             */
/*   Updated: 2025/02/14 10:26:23 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* printing numbers from 1 to 100, but with a twist:

For numbers divisible by 3, it prints "fizz".
For numbers divisible by 5, it prints "buzz".
For numbers divisible by both 3 and 5, it prints "fizzbuzz".
Otherwise, it prints the number itself.
ft_putchar();
ft_putnbr(); = print numbers
fizzbuzz();
main()'
*/
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int num)
{
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar((num % 10) + '0');
}
void fizzbuzz()
{
	int num; 

	num = 1;
	while (num <= 100)
	{
		if (num % 15 == 0)
			write(1, "fizzbuzz", 4);
		else if (num % 5 == 0)
			write(1, "buzz", 4);
		else if (num % 3 == 0)
			write(1, "fizz", 4);
		else
			ft_putnbr(num);
		num++;
		write(1, "\n", 1);
	}
}
int main()
{
	fizzbuzz();
	return (0);
}