/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:03:06 by imutavdz          #+#    #+#             */
/*   Updated: 2025/02/22 19:03:55 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	int i = 0;
	int arr[] = {5, 3, 6, 2, 10, 100, 41, 411, 1232, 92922, 323, 23};
	int len = sizeof(arr)/sizeof(arr[0]);

	radix_sort(arr, len);
	printf("sorted array: ");
	while (i < len)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
