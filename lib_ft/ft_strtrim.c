/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 19:50:26 by isalem            #+#    #+#             */
/*   Updated: 2025/08/09 15:20:38 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_trim_first(char const *s1, char const *set, size_t slen,
		size_t setlen)
{
	size_t	i;
	size_t	j;
	size_t	c;

	i = 0;
	c = 0;
	while (i < slen)
	{
		j = 0;
		while (j < setlen)
		{
			if (s1[i] == set[j])
			{
				c++;
				break ;
			}
			j++;
		}
		if (j == setlen)
			return (c);
		i++;
	}
	return (c);
}

static size_t	ft_trim_last(char const *s1, char const *set, size_t slen,
		size_t setlen)
{
	size_t	i;
	size_t	j;
	size_t	c;

	i = slen;
	c = 0;
	while (i > 0)
	{
		j = 0;
		while (j < setlen)
		{
			if (s1[i - 1] == set[j])
			{
				c++;
				break ;
			}
			j++;
		}
		if (j == setlen)
			return (c);
		i--;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	setlen;
	size_t	slen;
	size_t	f;
	size_t	l;

	setlen = ft_strlen(set);
	slen = ft_strlen(s1);
	f = ft_trim_first(s1, set, slen, setlen);
	l = ft_trim_last(s1, set, slen, setlen);
	if (f + l >= slen)
		return (ft_strdup(""));
	return (ft_substr(s1, f, slen - f - l));
}
