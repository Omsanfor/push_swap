/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:53:49 by omsanfor          #+#    #+#             */
/*   Updated: 2022/04/13 15:18:23 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	len_binary(int index)
{
	int	i;

	i = 0;
	while (index != 0)
	{
		index = index / 2;
		i++;
	}
	return (i);
}

t_swap	*lstnew(int data)
{
	t_swap	*newlist;

	newlist = malloc(sizeof(*newlist));
	newlist->data = data;
	newlist->next = NULL;
	return (newlist);
}

void	lstadd_back(t_swap **lists, t_swap *newlist)
{
	t_swap	*tmp_lists;

	tmp_lists = *lists;
	if (*lists == NULL)
	{
		*lists = newlist;
		newlist->next = NULL;
	}
	else
	{
		while (tmp_lists->next)
			tmp_lists = tmp_lists->next;
		tmp_lists->next = newlist;
		newlist->next = NULL;
	}
}

void	print_error(void)
{
	exit(write(2, "Error\n", 6));
}
