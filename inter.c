/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:28:12 by imutavdz          #+#    #+#             */
/*   Updated: 2025/04/18 17:17:44 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	seen(char *str, char c, int index)
{
	int	i = 0;

	while (i < index)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
int	included(char *str, char c)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	inter(char *str1, char *str2)
{
	int	i = 0;

	while (str1[i])
	{
		if (!seen(str1, str1[i], i) && included(str2, str1[i]))
			write(1, &str1[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
//SECOND METHOD//USING ARRAY AS LOOKUP TABLE FOR ASCII CHAR
// lookup[char] menas lookup[(int)av[2][j]]
int	main(int argc, char *argv[])
{
	int	i = 0;
	int	found[256] = {0};

	while (argv[1][i])
	{
		int	j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
		}
	}
	return (0);
}

