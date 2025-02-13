/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:24:55 by imutavdz          #+#    #+#             */
/*   Updated: 2025/02/12 20:00:58 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// Write a function that converts the string argument str (base N <= 16)
// to an integer (base 10) and returns it.

// The characters recognized in the input are: 0123456789abcdef
// Those are, of course, to be trimmed according to the requested base. For
// example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

// Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

// Minus signs ('-') are interpreted only if they are the first character of the
// string.

// Your function must be declared as follows:
int get_base_value(char c, int base)//gives decimal value of char
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)//given number in str_base
{													//convert in base 10
	int	i;
	int	sign;
	int	result;
	int	value;

	if (str_base < 2 || str_base > 16) //check if base valid
		return (0);
	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			i++;
	if (str[i++] == '-')
		sign -= 1; //number is negative
	else if (str[i] == '+')
		i++; //skip the plus
	while ((value = get_base_value(str[i], str_base)) == -1
		&& value <  str_base)
	{
		result = result * str_base + value;//building numb using POSITIONAL NOTATION
		i++;							//RULE: result = result x base + value
	}
	return (result * sign);
}


