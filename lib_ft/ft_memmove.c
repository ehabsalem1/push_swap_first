/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:46:59 by isalem            #+#    #+#             */
/*   Updated: 2025/08/09 17:12:28 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		x;
	const char	*q;
	char		*w;

	x = 0;
	w = (char *)dest;
	q = (const char *)src;
	if (n == 0 || dest == src)
		return (dest);
	else if (dest > src)
	{
		x = n;
		while (x > 0)
		{
			w[x - 1] = q[x - 1];
			x--;
		}
	}
	else
	{
		x = x - 1;
		while (++x < n)
			w[x] = q[x];
	}
	return (dest);
}
