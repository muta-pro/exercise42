/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:54:56 by imutavdz          #+#    #+#             */
/*   Updated: 2025/03/15 22:05:37 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.
- 64 or - 96 is to get the alphabetical index;
*/
#include <unistd.h>

// int main(int argc, char *argv[])
// {
// 	int times_index;
// 	int i;

// 	if (argc == 2)
// 	{
// 		i = 0;
// 		while (argv[1][i])
// 		{
// 			if (argv[1][i] > 64 && argv[1][i] < 91)
// 			{
// 				times_index = 0;
// 				while (times_index < argv[1][i] - 64)
// 				{
// 					write(1, &argv[1][i], 1);
// 					times_index++;
// 				}
// 			}
// 			else if (argv[1][i] > 96 && argv[1][i] < 123)
// 			{
// 				times_index = 0;
// 				while (times_index < argv[1][i] - 96)
// 				{
// 					write(1, &argv[1][i], 1);
// 					times_index++;
// 				}
// 			}
// 			else
// 				write(1, &argv[1][i], 1);
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }

//SPLITTED VERSION

void character(char c)
{
	int times_index;

	times_index = 0;
	if (c > 64 && c < 91)
	{
		while (times_index < c - 64)
		{
			write(1, &c, 1);
			times_index++;
		}
	}
	else if (c > 96 && c < 123)
	{
		times_index = 0;
		while (times_index < c - 96)
		{
			write(1, &c, 1);
			times_index++;
		}
	}
	else
		write(1, &c, 1);
}

void string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		character(str[i]);
		i++;
	}
	write(1, "\n", 1);
}
int main(int arc, char *arv[])
{
	if (arc == 2)
	{
		string(arv[1]);
	}
	else
		write(1, "\n", 1);
	return (0);
}
