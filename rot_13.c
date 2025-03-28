/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 19:00:06 by imutavdz          #+#    #+#             */
/*   Updated: 2025/03/25 12:42:11 by imutavdz         ###   ########.fr       */
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
//EXAM VERSION
int main(int argc, char const *argv[])
{
	int i = 0;
	char *str =(char *)argv[1];
	
	if (argc == 2)
	{
		while (str[i])
		{
			if (str[i] > 64 && str[i] < 78)
			{
				str[i] = str[i] + 13;
				write(1, &str[i], 1);
			}
			else if (str[i] > 77 && str[i] < 91)
			{
				str[i] = str[i] - 64 + 13;
				write(1, &str[i], 1);
			}
			else if (str[i] > 96 && str[i] < 110)
			{
				str[i] = str[i] + 13;
				write(1, &str[i], 1);
			}
			else if (str[i] > 109 && str[i] < 123)
			{
				str[i] = str[i] - 96 + 13;
				write(1, &str[i], 1);
			}
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	else
		write(1, &str[i], 1);
	return 0;
}
//OLD VERSION
//str[i] - 64(base) //converts to 0 based index
//%26 wraps around alphabet
//+ 64 (base) restores the ascii letter
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
