/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:54:03 by omsanfor          #+#    #+#             */
/*   Updated: 2022/04/13 15:43:25 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_set_index(t_swap **list_a)
{
	t_swap	*head;
	t_swap	*head2;
	int		index;
	int		max_binary;

	head = *list_a;
	max_binary = 0;
	while (head != NULL)
	{
		head2 = *list_a;
		index = 0;
		while (head2 != NULL)
		{
			if (head->data > head2->data)
				index++;
			head2 = head2->next;
		}
		head->binary = to_binary(index);
		if (ft_strlen(head->binary) > max_binary)
			max_binary = ft_strlen(head->binary);
		head = head->next;
	}
	ft_reset_index(max_binary, list_a);
}

void	start_sorting(t_swap **list_a)
{
	int	i;

	i = lenght(list_a);
	ft_set_index(list_a);
	if (i == 2)
		sort_2(list_a);
	else if (i == 3)
		sort_3(list_a);
	else if (i == 4)
		sort_4(list_a);
	else if (i == 5)
		sort_5(list_a);
	else
		radix_sort(list_a);
}

void	push_swap(t_swap **list_a)
{
	if (check_sort(list_a))
		exit(1);
	else if (check_duplicate(list_a))
		print_error();
	else
		start_sorting(list_a);
}

void	free_list(t_swap **list)
{
	t_swap	*temp;

	while (*list)
	{
		temp = *list;
		free(temp->binary);
		*list = (*list)->next;
		free(temp);
	}	
}

int	main(int argc, char *argv[])
{
	t_swap	*list_a;

	list_a = NULL;
	if (argc == 2)
	{
		ft_two_argc(argv, &list_a);
		push_swap(&list_a);
		free_list(&list_a);
	}
	else if (argc > 2)
	{
		ft_more_two_argc(argv, &list_a);
		push_swap(&list_a);
		free_list(&list_a);
	}
	return (0);
}
