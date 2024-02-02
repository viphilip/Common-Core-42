/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:36:53 by viphilip          #+#    #+#             */
/*   Updated: 2024/02/01 15:10:40 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <stdbool.h>
# include "../Libft/libft.h"

typedef struct s_stack
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack		*target_node;
	struct s_stack		*back;
	struct s_stack		*next;
}	t_stack;

/* -------------[Error Management]------------- */
int			check_double(char **nbr);
int			check_digit(char *nbr);
int			check_max(char *nbr);
int			check_error(char **nbr);

/* ---------------[Instructions]---------------- */
void		push(t_stack **src, t_stack **dst, char stack);
void		swap(t_stack **x, char stack);
void		swap_all(t_stack **a, t_stack **b);
void		rotate(t_stack **x, char stack);
void		rotate_all(t_stack **a, t_stack **b);
void		rev_rotate(t_stack **x, char stack);
void		rev_rotate_all(t_stack **a, t_stack **b);

/* ----------------[Stack Init]----------------- */
void		fill_stack_a(char **nbr, t_stack **a);
void		stack_init(t_stack *a, t_stack *b);
void		init_index(t_stack *a, t_stack *b);
void		init_median(t_stack *a, t_stack *b);
void		init_target(t_stack *a, t_stack *b);
void		init_cost(t_stack *stack);
void		init_cheapest(t_stack *x);

/* ------------------[Utils]-------------------- */
long long	ft_atol(const char *nptr);
size_t		stack_len(t_stack *lst);
t_stack		*lstnew(int content);
t_stack		*find_highest(t_stack *x);
t_stack		*find_smallest(t_stack *x);
t_stack		*get_last_node(t_stack *stack);

/* -----------------[Algorithms]----------------- */
void		sort(t_stack **a, t_stack **b);
int			is_sorted(t_stack *x);
t_stack		*sort_three(t_stack **a);
#endif