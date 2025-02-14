/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capitalize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 00:24:45 by imutavdz          #+#    #+#             */
/*   Updated: 2025/02/14 10:26:25 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// Write a program that takes one or several strings and, for each argument,
// capitalizes the first character of each word (If it's a letter, obviously),
// puts the rest in lowercase, and displays the result on the standard output,
// followed by a \n.
// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string. If a word only has one letter, it must be
// capitalized.
// If there are no arguments, the progam must display \n.

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	check_alphanumeric(char c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (2);
	else if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_lowcase(str);
	if (str[0] > 96 && str[0] < 123)
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i] != 0)
	{
		if (check_alphanumeric(str[i - 1]) == 0
			&& check_alphanumeric(str[i]) == 2)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

//  #include <stdio.h>

// int main(void)
// {
// 	char	str[] = "salut, kurosaWa! ! 420cinema fourty-Twenty: yes+?";

// 	printf("%s\n", str);
// 	ft_strcapitalize(str);
// 	printf("%s\n", str);
// }