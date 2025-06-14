/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:06:47 by imutavdz          #+#    #+#             */
/*   Updated: 2025/06/14 01:23:32 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
break a string into seperate words using space/tabs/newline
allocate memory based of words number

*/
#include <stdio.h>
#include <stdlib.h>



char **ft_split(char *str)
{
	char *words;
	int i;
	int **result;
	int word_index;

	words = count_word(str);
	result = malloc(sizeof(char*) * (words + 1));
	word_index = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_space)
			i++;
		if (str[i] && !is_space)
		{
			/* code */
		}
	}
	 

}

