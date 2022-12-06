/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:53:21 by omsanfor          #+#    #+#             */
/*   Updated: 2022/04/13 15:18:07 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_swap **list_a, t_swap **list_b)
{
	t_swap	*head2;

	if (list_b)
	{
		head2 = *list_b;
		*list_b = head2->next;
		if (*list_a)
		{
			head2->next = *list_a;
			*list_a = head2;
		}
		else
		{
			head2->next = NULL;
			*list_a = head2;
		}
	}
	write(1, "pa\n", 3);
}

void	pb(t_swap **list_a, t_swap **list_b)
{
	t_swap	*head2;

	if (*list_a)
	{
		head2 = *list_a;
		*list_a = head2->next;
		if (*list_b)
		{
			head2->next = *list_b;
			*list_b = head2;
		}
		else
		{
			head2->next = NULL;
			*list_b = head2;
		}
	}
	write (1, "pb\n", 3);
}
