/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_to_five.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 23:46:55 by isalem            #+#    #+#             */
/*   Updated: 2025/09/29 00:19:27 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_list *a)
{
	int size = 0;
	while (a)
	{
		size++;
		a = a->next;
	}
	return (size);
}

int	find_min_pos(t_list *a)
{
	int min;
	int pos;
	int index;

	if (!a)
		return (-1);
	min = a->content;
	pos = 0;
	index = 0;
	while (a)
	{
		if (a->content < min)
		{
			min = a->content;
			pos = index;
		}
		a = a->next;
		index++;
	}
	return (pos);
}

void	sort_two(t_list **a)
{
	if ((*a)->content > (*a)->next->content)
		sa(a);
}

void	sort_three(t_list **a)
{
	int first ;
    int second;
    int third ;
    
    first = (*a)->content;
    second = (*a)->next->content;
    third = (*a)->next->next->content;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

void	sort_four(t_list **a, t_list **b)
{
	int min_pos;

    min_pos = find_min_pos(*a);
	if (min_pos == 1)
		ra(a);
	else if (min_pos == 2)
	{
		ra(a);
		ra(a);
	}
	else if (min_pos == 3)
		rra(a);
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_list **a, t_list **b)
{
	int i;
    int min_pos;
    int size;

    i = 0;
	while (i < 2)
	{
		min_pos = find_min_pos(*a);
		size = stack_size(*a);
		if (min_pos <= size / 2)
		{
           	while (min_pos--)
			ra(a);
        }
        else
		{
        	while (min_pos++ < size)
			rra(a);
        }
		pb(a, b);
		i++;
	}
	sort_three(a);
	pa(a, b);
	pa(a, b);
}
