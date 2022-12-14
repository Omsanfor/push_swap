/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:53:26 by omsanfor          #+#    #+#             */
/*   Updated: 2022/04/13 15:50:34 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_swap **a, int i)
{
	t_swap	*first_list;
	t_swap	*rotate_list;
	t_swap	*last_list;

	if ((*a) == NULL || (*a)-> next == NULL)
		return ;
	rotate_list = *a;
	first_list = (*a)->next;
	last_list = *a;
	while (last_list->next != NULL)
		last_list = last_list->next;
	rotate_list->next = NULL;
	last_list->next = rotate_list;
	*a = first_list;
	if (i == 1)
		write(1, "ra\n", 3);
}

void	rb(t_swap **list_b, int i)
{
	t_swap	*first_list;
	t_swap	*last_list;
	t_swap	*rotate_list;

	if ((*list_b) == NULL || (*list_b)->next == NULL)
		return ;
	rotate_list = *list_b;
	first_list = (*list_b)->next;
	last_list = *list_b;
	while (last_list->next != NULL)
		last_list = last_list->next;
	rotate_list->next = NULL;
	last_list->next = rotate_list;
	*list_b = first_list;
	if (i == 1)
		write(1, "ra\n", 3);
}

void	rr(t_swap **list_a, t_swap **list_b)
{
	ra(list_a, 0);
	rb(list_b, 0);
	write(1, "rr\n", 3);
}
