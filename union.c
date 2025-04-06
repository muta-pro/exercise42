/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 20:48:18 by imutavdz          #+#    #+#             */
/*   Updated: 2025/04/03 05:12:25 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_dup(char *str, char c, int until)
{
	int	i;

	i = 0;
	while (i < until)
	{
		if (str[i] == c)
			return (1); //true - char has appeared
		i++;
	}
	return (0); //false - char is unique to print
}

void	uni(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i])
	{
		if (!is_dup(str1, str1[i], i))
			ft_putchar(str1[i]);
		i++;
	}
	while (str2[j])
	{
		if (!is_dup(str1, str2[i], i) && !is_dup(str2, str2[j], j))
			ft_putchar(str2[i]);
		j++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (1);
	}
	uni(argv[1], argv[2]);
	return (0);
}
