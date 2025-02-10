/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 20:17:39 by imutavdz          #+#    #+#             */
/*   Updated: 2025/02/09 16:15:30 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.
*/
#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write (1, "\n", 1);
}

void rotone(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] > 64 && str[i] < 90) || (str[i] > 96 && str[i] < 122))
			str[i] = str[i] + 1;
		else if (str[i] == 90 || str[i] == 122)
			str[i] = str[i] - 25;
		i++;
	}
	ft_putstr(str);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write (1, "\n", 1);
			return (1);
	}
	rotone(argv[1]);
	return 0;
}

