/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:46:29 by imutavdz          #+#    #+#             */
/*   Updated: 2025/02/12 20:00:59 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_atoi_base(char *str, char *base); Write a function that converts the initial portion of the string pointed by str to int
representation.
• str is in a specific base given as a second parameter.
• excepted the base rule, the function should work exactly like ft_atoi.
• If there’s an invalid argument, the function should return 0. Examples of invalid
arguments :
◦ base is empty or size of 1;
◦ base contains the same character twice ;
◦ base contains + or - or whitespaces; use while loops and no function is allowed.