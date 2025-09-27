/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 09:20:46 by isalem            #+#    #+#             */
/*   Updated: 2025/08/08 17:39:07 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	temp;

	temp = 0;
	while (temp < n)
	{
		if (s1[temp] != s2[temp])
			return ((unsigned char)s1[temp] - (unsigned char)s2[temp]);
		if (s1[temp] == '\0')
			break ;
		temp++;
	}
	return (0);
}
