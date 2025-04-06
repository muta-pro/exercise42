/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:46:29 by imutavdz          #+#    #+#             */
/*   Updated: 2025/04/03 23:19:28 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// int ft_atoi_base(char *str, char *base); Write a function that converts the initial 
// portion of the string pointed by str to int
// representation.
// • str is in a specific base given as a second parameter.
// • excepted the base rule, the function should work exactly like ft_atoi.
// • If there’s an invalid argument, the function should return 0. Examples of invalid
// arguments :
// ◦ base is empty or size of 1;
// ◦ base contains the same character twice ;
// ◦ base contains + or - or whitespaces; use while loops and no function is allowed.
#include <stdio.h>

int	len_base(char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

int	invalid(int len, char *base)
{
	int	i;
	int	j;

	if (len <= 1)
		return (1);
	i = 0;
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (1);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	base_value(char c, char *base) //returns the numeric value of char in given base
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	atoi_base(char *str, char *base) //converts string to int based on given base
{
	int	i;
	int	sign;
	int	result;
	int	value;
	int	len;

	i = 0;
	result = 0;
	len = len_base(base);
	if (invalid(len, base))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i])
	{
		value = base_value(str[i], base);
		if (value == -1)
			break ;
		result = result * len + value;
		i++;
	}
	return (result * sign);
}
