/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:53:03 by omsanfor          #+#    #+#             */
/*   Updated: 2022/04/13 15:42:45 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_swap
{
	int				data;
	char			*binary;
	struct s_swap	*next;
}t_swap;

int		is_sign(const char *str, int *i);
int		ft_atoi(const char *str);
void	ft_set_index(t_swap **list_a);
void	start_sorting(t_swap **list_a);
void	push_swap(t_swap **list_a);
void	free_list(t_swap **list);
void	pa(t_swap **list_a, t_swap **list_b);
void	pb(t_swap **list_a, t_swap **list_b);
void	ra(t_swap **list_a, int i);
void	rb(t_swap **list_b, int i);
void	rr(t_swap **list_a, t_swap **list_b);
void	rra(t_swap **list_a, int i);
void	rrb(t_swap **list_b, int i);
void	rrr(t_swap **list_a, t_swap **list_b);
void	sa(t_swap **listA, int n);
void	sb(t_swap **listB, int n);
void	ss(t_swap **listA, t_swap **listB);
int		val_pos(t_swap *list, int pos);
int		small_index_num(t_swap **list_a);
int		len_argv(t_swap **list_a);
void	sort_2(t_swap **list_a);
void	sort_3(t_swap **list_a);
void	sort_4(t_swap **list_a);
void	sort_5(t_swap **list_a);
void	radix_sort(t_swap **list_a);
int		ft_isdigit(char *str);
int		ft_strlen(char *str);
t_swap	*lstnew(int data);
void	lstadd_back(t_swap **lists, t_swap *newlist);
void	print_error(void);
char	*to_binary(int index);
void	ft_reset_index(int max_binary, t_swap **list_a);
int		lenght(t_swap **list_a);
int		check_sort(t_swap **list_a);
int		check_duplicate(t_swap **list_a);
int		len_binary(int index);
void	ft_more_two_argc(char *argv[], t_swap **list_a);
void	ft_two_argc(char *argv[], t_swap **list_a);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
#endif