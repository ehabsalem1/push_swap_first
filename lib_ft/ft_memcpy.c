/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:49:35 by isalem            #+#    #+#             */
/*   Updated: 2025/08/08 17:38:33 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		x;
	const char	*q;
	char		*w;

	x = 0;
	w = (char *)dest;
	q = (const char *)src;
	while (x < n)
	{
		w[x] = q[x];
		x++;
	}
	return (dest);
}
