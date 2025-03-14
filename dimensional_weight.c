/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dimensional_weight.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:12:54 by imutavdz          #+#    #+#             */
/*   Updated: 2025/03/14 16:24:26 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//compute a dimensional weight of box
//using printf to print a prompt for the user
//input data using scanf
//ceiling division to round up
#include <stdio.h>
#define INCH_X_POUND 166

int main(void)
{
	int height, width, length, weight, volume;

	printf("enter height: ");
	scanf("%d", &height);
	printf("enter width: ");
	scanf("%d", &width);
	printf("enter length: ");
	scanf("%d", &length);

	printf("Volume of the box: %d\n", height * width * length);//printing expressions
	volume = height * width * length;
	weight = (volume + INCH_X_POUND - 1) / INCH_X_POUND;//ceiling division
	printf("Dimensional weight: %d\n", weight);

}
