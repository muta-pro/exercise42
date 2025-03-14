/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:40:05 by imutavdz          #+#    #+#             */
/*   Updated: 2025/03/14 14:47:20 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Write a program that takes a string and displays its first word, followed by a
newline.
A word is a section of string delimited by spaces/tabs or by the start/end of
the string.
If the number of parameters is not 1, or if there are no words, simply display
a newline.
*/
#include <unistd.h>

void first_word(char *str)
{
	int i;

	i = 0;
	while (str[i] == 32 || str[i] == 9)
		i++;
	while (str[i] != 32 && str[i] != 9 && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (write(1, "\n", 1));
	first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
