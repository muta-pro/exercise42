/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DLL.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 00:27:42 by imutavdz          #+#    #+#             */
/*   Updated: 2025/03/18 00:56:08 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//testing the node of the doubly linked list
//
#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int number;
	struct s_node *next;
	struct s_node *prev;
} t_node;

t_node *new_node(int number) //!!FUNC IS A POINTER
{
	t_node *node; //!!VARIABLE IS A POINTER

	node = (t_node*)malloc(sizeof(t_node)); //!!can ADD DATA TYPE - cast from void
	node->number = number;
	node->next = NULL; //!!NO NEXT
	node->prev = NULL;
	return (node);
}

int main()
{
	t_node *test_n;

	test_n = new_node(3);
	printf("%d\n", test_n->number); //!!NEED TO ACCESS THE VALUE NOT JUST NODE
	return (0);
}
