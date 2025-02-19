/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:10:09 by imutavdz          #+#    #+#             */
/*   Updated: 2025/02/19 14:15:12 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int find_smallest(int arr[], int len)
{
	int smallest = arr[0];
	int smallest_ndx = 0;
	int i = 1;

	while (i < len)
	{
		if (arr[i] < smallest)
		{
			smallest = arr[i];
			smallest_ndx = i;
		}
		i++;
	}
	return (smallest_ndx);
}
void select_sort(int arr[], int len)
{
	int i = 0;
	int smallest_ndx;
	int temp;

	while (i < len - 1)
	{
		smallest_ndx = find_smallest(arr + i, len - i) + i;
		temp = arr[i];
		arr[i] = arr[smallest_ndx];
		arr[smallest_ndx] = temp;
		i++;
	}
}

int main()
{
	int i = 0;
	int arr[] = {5, 3, 6, 2, 10, 100, 41, 411, 1232, 92922, 323, 23};
	int len = sizeof(arr)/sizeof(arr[0]);

	select_sort(arr, len);
	printf("sorted array: ");
	while (i < len)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
