/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:32:49 by isalem            #+#    #+#             */
/*   Updated: 2025/08/08 19:28:16 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*c;
	int		i;
	int		l;

	l = 0;
	while (s[l])
		l++;
	c = (char *)malloc(sizeof(char) * (l + 1));
	if (c == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		c[i] = s[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
