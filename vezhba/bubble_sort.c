/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:47:26 by imutavdz          #+#    #+#             */
/*   Updated: 2025/02/22 18:55:48 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void sort_b(int array[], int size)
{
	int temp;
	int i = 0;

	while (i < size - 1)
	{
		int j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
void print(int array[], int size)
{
	int i = 0;

	while (i < size)
		printf("%d", array[i++]);
	printf("\n");
}

int main()
{
	int array[] = {5, 2, 3, 6, 1};
	int size = sizeof(array) / sizeof(array[0]);

	print(array, size);
	sort_b(array, size);
	print(array, size);
	return (0);
}
