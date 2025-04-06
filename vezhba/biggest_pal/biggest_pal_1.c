/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_pal_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:52:48 by imutavdz          #+#    #+#             */
/*   Updated: 2025/04/03 20:52:20 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//we need the lenght of the palindrome found
//we return it after we search the substring
//we compare it and store it in longest
//we also store the start index for printing
#include <unistd.h>
#include <stdio.h>

// int	find_pal(char *s, int left, int right)
// {
// 	int	i;

// 	i = 0;
// 	while (left >= 0 && s[right] && s[left] == s[right])
// 	{
// 		left--;
// 		right++;
// 	}
// 	return (right - left - 1); //pal lenght returns
// }

// void	print_substr(char *str, int start, int end)
// {
// 	while (start <= end)
// 	{
// 		write(1, &str[start], 1);
// 		start++;
// 	}
// }

// int	main(int argc, char *argv[])
// {
// 	char	*s;
// 	int		i;
// 	int		len;
// 	int		start; //start ondex of the longest pal
// 	int		longest_len;
// 	int		len_singlechar;
// 	int		len_doublechar;

// 	i = 0;
// 	start = 0;
// 	len = 0;
// 	s = argv[1];
// 	longest_len = 0; //stores lenght found
// 	if (argc != 2)
// 	{
// 		write(1, "\n", 1);
// 		return (1);
// 	}
// 	while (s[i]) //we loop throught the string, i will be the center
// 	{
// 		len_singlechar = find_pal(s, i, i);
// 		len_doublechar = find_pal(s, i, i + 1);
// 		if (len_singlechar > len_doublechar)
// 			len = len_singlechar;
// 		else
// 			len = len_doublechar;
// 		if (len >= longest_len)
// 		{
// 			longest_len = len;
// 			start = i - (len - 1) / 2;//center - steps to move left
// 		}
// 		i++;
// 	}
// 	print_substr(s, start, start + longest_len - 1);
// 	write(1, "\n", 1);
// 	return (0);
// }
// kukmakamkmm

int	find_pa_len(char *s, int l, int r)
{
	while (l >= 0 && s[r] && s[r] == s[l])
	{
		l--;
		r++;
	}
	return (r - l - 1);
}
void printpal(char *s, int start, int len)
{
	while (len > 0)
	{
		write(1, &s[start], 1);
		start++;
		len--;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*s;
	int		len;
	int		longest;
	int		start;
	int		singlechar_len;
	int		doublechar_len;

	s = argv[1];
	if (argc == 2)
	{
		i = 0;
		while (s[i])
		{
			singlechar_len = find_pa_len(s, i, i);
			doublechar_len = find_pa_len(s, i, i + 1);
			if (singlechar_len > doublechar_len)
				len = singlechar_len;
			else
				len = doublechar_len;
			if (len >= longest)
			{
				longest = len;
				start = i - ((len - 1) / 2);
			}
			i++;
		}
		printf("start: %d\n len:%d\n longest: %d\n", start, len, longest);
		printpal(s, start, longest);
	}
	return (0);
}
