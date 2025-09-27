/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:40:00 by isalem            #+#    #+#             */
/*   Updated: 2025/09/27 19:41:14 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int		i;
	char	w;

	i = 0;
	w = (char)c;
	while (s[i])
	{
		if (s[i] == w)
			return ((char *)&s[i]);
		i++;
	}
	if (w == '\0')
		return ((char *)&s[i]);
	else
		return (NULL);
}
