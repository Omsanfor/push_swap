/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:07:56 by omsanfor          #+#    #+#             */
/*   Updated: 2022/04/13 15:18:16 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_more_two_argc(char *argv[], t_swap **list_a)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_isdigit(argv[i]) && ft_strlen(argv[i]) < 12)
			lstadd_back(list_a, lstnew(ft_atoi(argv[i])));
		else
			print_error();
			i++;
	}
}

void	ft_two_argc(char *argv[], t_swap **list_a)
{
	char	**str;
	int		i;

	i = 0;
	str = ft_split(argv[1], ' ');
	while (str[i])
	{
		if (ft_isdigit(str[i]) && ft_strlen(str[i]) < 12)
			lstadd_back(list_a, lstnew(ft_atoi(str[i])));
		else
			print_error();
			i++;
	}
}
