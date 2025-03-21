/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anagram_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:50:55 by imutavdz          #+#    #+#             */
/*   Updated: 2025/03/21 18:09:13 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//write program that takes two strings
//if its anagram it retusnt 0 , if not returns other value
//if there is more than 2 arguments rturns other value
#include <string.h>
int is_anagram(char *s1, char *s2);
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int result = is_anagram(argv[1], argv[2]);
		if (result == 0)
			return (0);
		else
			return(1);
	}
	else
		return (1);
}
int is_anagram(char *s1, char *s2)
{
	int tab[127] = {0};
	int i = 0;
	int j = 0;

	while (*s1)
	{
		int sum1 = 0;
		sum1 = sum1 + tab[(*int)s1[i]];
		i++;
	}
	while (*s2)
	{
		int sum2 = 0;
		sum2 = sum2 + tab[(*int)s2[j]];
		j++;
	}
	if (sum2 == sum1)
		return (0);
	else
		return (1);
}
