/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anagram.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 22:05:35 by imutavdz          #+#    #+#             */
/*   Updated: 2025/05/02 06:04:53 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//we are using ASCII value of each character as a coordinate in our array
#include <stdio.h>

int	is_anagram(char *a, char *b)
{
	char	tab[127] = {0};
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (*a) //dereference pointer getting the character
	{
		tab[(int)*a] += 1;//converts char to ascii value which becomes index in tab
		a++;
	}
	while (*b)
	{
		tab[(int)*b] -= 1;
		b++;
	}
	while (i < 127)
	{
		if (tab[i] != 0)
			return (0); //not anagram
		i++;
	}
	return (1); //is_anagram
}

int main()
{

	if (is_anagram("listen", "silent"))
		printf("issa anagram\n");
	else
		printf("not really anagram\n");
	if (is_anagram("samo", "osam"))
		printf("issa anagram\n");
	else
		printf("not really anagram\n");
	if (is_anagram("", " "))
		printf("issa anagram\n");
	else
		printf("not really anagram\n");
	if (is_anagram("aa", "ab"))
		printf("issa anagram\n");
	else
		printf("not really anagram\n");
	if (is_anagram("nemanema", "emnanem"))
		printf("issa anagram\n");
	else
		printf("not really anagram\n");
	return (0);
}
