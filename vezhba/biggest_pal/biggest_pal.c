/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_pal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:05:32 by imutavdz          #+#    #+#             */
/*   Updated: 2025/01/11 21:08:53 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//input handling - only one argument or print newline
//palindrome search - the longest one or the last one if same
//only lowercase laters nad write function
//boundry check prevent accessing memory before and after string
// == palindrome check
#include <unistd.h>

int find_pal(int left, int right, char *str)
{
	int len = ft_strlen(str);//boundry checks
	int lenpal;

	while (left >= 0 && right < len && str[left] == str[right])
	{
		left--;
		right++;
	}
	lenpal = right - (left + 1);
	return (lenpal);
}

void biggest_pal(char *str)
{
	int start = 0;
	int max_len = 1;
	int len = ft_strlen(str);
	int current_len;
	int i = 0;

	while (i < len)
	{
		current_len = find_pal(str, i, i);
		if (current_len >= max_len)
		{
			start = i - (current_len - 1) / 2;
			max_len = current_len;
		}
		current_len = find_pal(str, i, i + 1);
		if (current_len >= max_len)
		{
			start = i - (current_len / 2) + 1;
			max_len = current_len;
		}
		i++;
	}
	if (i < max_len)
		write(1, str + start, max_len);
	write(1, '\n', 1);
}

int ft_strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}
int main(int argc, char **argv)
{
	if (argc != 2)//check for 2 arguments
	{
		write(1, '\n', 1);
		return (0);
	}
	if (!argv[1][0])
	{
		write('\n');
		return (0);
	}
	biggest_pal(argv[1]);
	return (0);
}
