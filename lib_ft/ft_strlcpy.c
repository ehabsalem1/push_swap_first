/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:42:47 by isalem            #+#    #+#             */
/*   Updated: 2025/08/08 17:38:44 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	temp;

	temp = 0;
	if (size > 0)
	{
		while (temp < size - 1 && src[temp] != '\0')
		{
			dst[temp] = src[temp];
			temp++;
		}
		dst[temp] = '\0';
	}
	temp = 0;
	while (src[temp] != '\0')
	{
		temp++;
	}
	return (temp);
}
