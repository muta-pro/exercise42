/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_pal_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:52:48 by imutavdz          #+#    #+#             */
/*   Updated: 2025/03/21 12:49:33 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//we need the lenght of the palindrome found
//we return it after we search the substring
//we compare it and store it in longest
//we also store the start index for printing
#include "biggest_pal.h"

int find_pal(char *s, int left, int right)
{
	int i = 0;

	while (left >= 0 && s[right] && s[left] == s[right])
	{
		left--;
		right++;
	}
	return (right - left - 1); //pal lenght returns
}

void print_substr(char *str, int start, int end)
{
	while (start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
}

int main(int argc, char *argv[])
{
	char *s = argv[1];
	int i, len = 0;
	int start = 0; //start ondex of the longest pal
	int longest_len = 0; //stores lenght found
	int len_single;
	int len_double;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	while (s[i]) //we loop throught the string, i will be the center
	{
		len_singlechar = find_pal(s, i, i);
		len_doublechar = find_pal(s, i, i + 1);
		if (len_singlechar > len_doublechar)
			len = len_singlechar;
		else
			len = len_doublechar;
		if (len > longest)
		{
			longest = len;
			start = i - (len - 1) / 2;//center - steps to move left
		}
		i++;
	}
	print_substr(s, start, start + longest - 1);
	write(1, "\n", 1);
	return (0);
}
