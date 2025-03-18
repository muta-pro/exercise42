/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 19:00:06 by imutavdz          #+#    #+#             */
/*   Updated: 2025/03/16 21:08:16 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//ROT13 program takes the string and displays it, replacing each letter by the
//13 spaces ahead letter, followed by newline

#include <unistd.h>
//!!ACCESSING NON-EXISTING POSITION IN MEMORY
// int main(int argc, char *argv[])
// {
// 	int i;

// 	i = 0;
// 	if (argc == 2)
// 	{
// 		while (argv[1][i])
// 		{
// 			if (argv[1][i] > 64 && argv[1][i] < 91)
// 				write(1, &argv[1][i + 13], 1);
// 			else if (argv[1][i] > 96 && argv[1][i] < 123)
// 				write(1, &argv[1][i + 13], 1);
// 			else
// 				write(1, &argv[1][i], 1);
// 			i++;
// 		}
// 		write(1, "\n", 1);
// 	}
// 	else
// 		write(1, "\n", 1);
// 	return (0);
// }

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void rot13(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			ft_putchar(((str[i] - 64 + 13) % 26) + 64);
		else if (str[i] > 96 && str[i] < 123)
			ft_putchar(((str[i] - 96 + 13) % 26) + 96);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		rot13(argv[1]);
	ft_putchar('\n');
	return (0);
}
