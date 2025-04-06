/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anagram_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:50:55 by imutavdz          #+#    #+#             */
/*   Updated: 2025/04/03 05:25:40 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//write program that takes two strings
//if its anagram it retusnt 0 , if not returns other value
//if there is more than 2 arguments rturns other value
//so we create an array TAB for char ferquency
//each index is ascii value
//
#include <string.h>
#include <unistd.h>

int	is_anagram(char *s1, char *s2);
int	main(int argc, char *argv[])
{
	int	result;

	if (argc == 3)
	{

		result = is_anagram(argv[1], argv[2]);
		if (result == 0)
			write(1, "yes", 3);
		else
			write(1, "no", 2);
	}
	else
		write(1, "shit", 4);
}
int	is_anagram(char *s1, char *s2)
{
	int	tab[127] = {0};
	int	i = 0;

	while (s1[i])
	{
		tab[(int)s1[i]]++;//access position in the array
		i++; //increments the character	
	}
	i = 0;
	while (s2[i])
	{
		tab[(int)s2[i]]--;
		i++;
	}
	i = 0;
	while (i < 127)//here it checks if all positions are 0 after decrementing
	{
		if (tab[i] != 0)
			return (1);
		i++;
	}
	return (0);
}
