/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_pal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:21:03 by imutavdz          #+#    #+#             */
/*   Updated: 2025/03/19 16:57:14 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PAL_H
#define PAL_H

#include <unistd.h>

void print_substr(char *str, int start, int end);
int find_pal(char *s, int left, int right);

#endif
