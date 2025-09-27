/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 19:11:37 by isalem            #+#    #+#             */
/*   Updated: 2025/08/10 20:41:59 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	s1len;
	size_t	s2len;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	s = (char *)malloc(s1len + s2len + 1);
	if (!s)
		return (NULL);
	while (i < s1len)
	{
		s[i] = s1[i];
		i++;
	}
	i = -1;
	while (++i < s2len)
		s[i + s1len] = s2[i];
	s[i + s1len] = '\0';
	return (s);
}
