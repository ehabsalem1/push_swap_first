/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 10:19:45 by isalem            #+#    #+#             */
/*   Updated: 2025/08/08 17:58:37 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	temp;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		temp = 0;
		while (i + temp < len && big[i + temp] == little[temp]
			&& little[temp] != '\0')
			temp++;
		if (little[temp] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
