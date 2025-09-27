/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:34:09 by isalem            #+#    #+#             */
/*   Updated: 2025/08/11 14:01:04 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur;

	cur = *lst;
	if (lst == NULL || new == NULL)
		return ;
	if (cur == NULL)
	{
		*lst = new;
		return ;
	}
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = new;
}
