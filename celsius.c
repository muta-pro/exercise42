/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   celsius.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 16:14:49 by imutavdz          #+#    #+#             */
/*   Updated: 2025/03/14 16:24:15 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//converts fahrenheit to celsius
#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main()
{
	float f, celsius;

	printf("enter Fahrenheit temperature: ");
	scanf("%f", &f);
	celsius = (f - FREEZING_PT) * SCALE_FACTOR;
	printf("Celsius equivalent: %.1fC\n", celsius);
}
