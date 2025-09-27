/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:30:11 by isalem            #+#    #+#             */
/*   Updated: 2025/08/10 20:53:18 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*c;

	if (nmemb == 0 || size == 0)
	{
		c = (char *)malloc(1);
		if (!c)
			return (NULL);
		return (c);
	}
	c = (char *)malloc(size * nmemb);
	if (!c)
		return (NULL);
	ft_bzero(c, size * nmemb);
	return (c);
}
