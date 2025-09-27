/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 10:08:49 by isalem            #+#    #+#             */
/*   Updated: 2025/08/08 17:38:57 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				temp;
	const unsigned char	*str1;
	const unsigned char	*str2;

	temp = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (temp < n)
	{
		if (str1[temp] != str2[temp])
			return ((int)str1[temp] - (int)str2[temp]);
		temp++;
	}
	return (0);
}
