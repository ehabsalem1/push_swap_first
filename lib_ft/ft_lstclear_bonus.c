/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:21:01 by isalem            #+#    #+#             */
/*   Updated: 2025/08/11 13:54:00 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;

	cur = *lst;
	if (*lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		cur = *lst;
		*lst = cur->next;
		del(cur->content);
		free(cur);
	}
}
