/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 06:03:26 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/17 02:45:09 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

void	ft_putstr_fd(char *s, int fd);
void	ft_error_handling(int argc, char **argv);
int		ft_strcmp(const char *s1, const char *s2);
long	ft_atol(const char *str);
void	ft_error_message(char *str);
int		ft_isdigit(int c);
t_stack	*ft_lstnew(int value);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int		*ft_arg_to_array(int argc, char **argv);
t_stack	*ft_array_to_list(int argc, int *unordered_array, int *ordered_array);
int		*ft_bubble_sort(int argc, int *array);
void	ft_put_position(t_stack **head);
void	ft_sa(t_stack **stack_a);
void	ft_sb(t_stack **stack_b);
void	ft_ss(t_stack **stack_a, t_stack **stack_b);
void	ft_ra(t_stack **stack_a);
void	ft_rb(t_stack **stack_b);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_rra(t_stack **stack_a);
void	ft_rrb(t_stack **stack_b);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b);
void	ft_pa(t_stack **stack_a, t_stack **stack_b);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);

#endif
