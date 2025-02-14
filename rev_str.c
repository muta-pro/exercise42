/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:20:40 by imutavdz          #+#    #+#             */
/*   Updated: 2025/02/14 19:45:13 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//write function that prints string in revers without modifying the stirng
//it must return the parameter of the function
#include <unistd.h>
#include <stdio.h>

int len_str(const char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return (len);
}

char *rev_str(char *str)
{
	if (!str)
		return (0);
	int len = len_str(str);

	while (len > 0)
	{
		len--;
		write(1, &str[len], 1);
	}
	return (str);//returning the original pointer
}
int main()
{
	rev_str("");
	write(1, "\n", 1);
	char *original = "ciao";
	char *returned = rev_str(original);
	write(1, "\n", 1);
	if (returned == original)
		printf("return matches the original input string\n");
	else
		printf("return value does not match the original string\n");
		printf("%p\n%p\n", original, returned);
	return (0);
}