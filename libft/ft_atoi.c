/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:52:43 by omsanfor          #+#    #+#             */
/*   Updated: 2022/04/13 15:17:42 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sign(const char *str, int *i)
{
	if (str[*i] == '-')
	{
		*i += 1;
		return (-1);
	}
	else if (str[*i] == '+')
	{
		*i += 1;
		return (1);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	sign = is_sign(str, &i);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		i++;
	}
	if ((result > 2147483647 && sign == 1)
		|| (result > 2147483648 && sign == -1))
		print_error();
	return (result * sign);
}
