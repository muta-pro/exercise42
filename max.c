/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:00:16 by imutavdz          #+#    #+#             */
/*   Updated: 2025/02/14 10:26:21 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*find the maximum integer in an array.
array check len
store into variable each index if > than current*/
int max(int *tab, unsigned int len)
{
	int i;
	int highest;

	i = 1;
	highest = tab[0];
	if (!len)
		return (-1);
	while (i < len)
	{
		if (tab[i] > highest)
			highest = tab[i];
		i++;
	}
	return (highest);
}