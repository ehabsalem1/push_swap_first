/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:03:11 by isalem            #+#    #+#             */
/*   Updated: 2025/08/08 17:39:15 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	w;

	i = ft_strlen(s);
	w = (char)c;
	while (i >= 0)
	{
		if (s[i] == w)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
