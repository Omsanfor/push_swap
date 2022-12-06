/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:40:50 by omsanfor          #+#    #+#             */
/*   Updated: 2022/04/13 15:18:00 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_free_mas(char **mas)
{
	int	i;

	i = 0;
	while (mas[i])
	{
		free(mas[i]);
		i++;
	}
	free(mas);
}

static char	ft_count_str(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_lol(char **mas, char const *s, char c, int i)
{
	int	start;
	int	j;

	j = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		start = i;
		while (s[i] && s[i] != c)
			i++;
		mas[j] = ft_substr(s, start, (i - start));
		if (mas[j] == NULL)
		{
			ft_free_mas(mas);
			return (NULL);
		}
		while (s[i] && s[i] == c)
			i++;
		j++;
	}
	mas[j] = NULL;
	return (mas);
}

char	**ft_split(char const *s, char c)
{
	char	**mas;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s)
	{
		mas = (char **)malloc(sizeof(char *) * (ft_count_str(s, c) + 1));
		if (mas == NULL)
			return (NULL);
		return (ft_lol(mas, s, c, i));
	}
	else
		return (NULL);
}
