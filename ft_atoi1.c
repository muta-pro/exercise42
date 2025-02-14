/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:24:55 by imutavdz          #+#    #+#             */
/*   Updated: 2025/02/14 10:26:04 by imutavdz         ###   ########.fr       */
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
// Your function must be declared as follows
#include <stdio.h>
#include <assert.h>

int get_base_value(char c, int base)//gives decimal value of char
{
	if (c >= '0' && c <= '9')//if char is a digit
		return (c - '0');//0 is 48
	else if (c >= 'a' && c <= 'f')//if it's lowercase hex
		return (c - 'a' + 10);//65 + 10
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);//97 - a + 10
	return (-1);//invalid character
}

int	ft_atoi_base(const char *str, int str_base)//given number in str_base
{													//convert in base 10
	int	sign;
	int	result;
	int	value;

	if (str_base < 2 || str_base > 16) //check if base valid
		return (0);
	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++; //number is negative
	}
	else if (*str == '+')
		str++; //skip the plus
	while (*str)
		{
			value = get_base_value(*str, str_base);
			if (value == -1 || value >= str_base) //stop if invalif character
				break;
		result = result * str_base + value;//building numb using POSITIONAL NOTATION
		str++;							//RULE: result = result x base + value
	}
	return (result * sign);
}

void test(const char *str, int base, int expected)
{
	int result;

	result = ft_atoi_base(str, base);
	printf("ft_atoi_base(\"%s\", %d) = %d (expected: %d)\n", str, base, result, expected);
	assert(result == expected);
}
int main(void)
{
	// Binary Tests
    test("1010", 2, 10);
    test("1111", 2, 15);
    test("-1010", 2, -10);
    // Decimal Tests
    test("42", 10, 42);
    test("-12345", 10, -12345);
    // Hexadecimal Tests
    test("1A", 16, 26);
    test("ff", 16, 255);
    test("-FF", 16, -255);
    // Octal Tests
    test("10", 8, 8);
    test("77", 8, 63);
    // Base 4 Tests
    test("123", 4, 27);
    test("-123", 4, -27);
    // Invalid Base Cases
    test("100", 1, 0);  // Base too low
    test("Z9", 16, 0);  // Invalid character
    return 0;
}