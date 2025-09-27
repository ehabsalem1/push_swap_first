/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:26:34 by isalem            #+#    #+#             */
/*   Updated: 2025/08/11 12:30:31 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	x;

	if (lst == NULL)
		return (0);
	x = 1;
	while (lst->next != NULL)
	{
		x++;
		lst = lst->next;
	}
	return (x);
}
