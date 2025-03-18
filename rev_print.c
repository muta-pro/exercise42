/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 22:07:16 by imutavdz          #+#    #+#             */
/*   Updated: 2025/03/15 22:21:44 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//program that takes string and prints in reverse followed by newline.
//laso print newline is number of parameters is not 1
#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
			i++;
		while (i > 0)
		{
			i--;
			write(1, &argv[1][i], 1);
		}
		write(1, "\n", 1);
	}
	else
		write (1, "\n", 1);
	return (0);
}
