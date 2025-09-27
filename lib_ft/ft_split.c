/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:21:44 by isalem            #+#    #+#             */
/*   Updated: 2025/08/10 21:34:08 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countwords(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*word_dup(const char *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static char	**free_string_array(char **ss, size_t count)
{
	while (count > 0)
		free(ss[--count]);
	free(ss);
	return (NULL);
}

static char	**fill(char **ss, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		ss[j] = word_dup(s, start, i);
		if (!ss[j])
			return (free_string_array(ss, j));
		j++;
	}
	ss[j] = NULL;
	return (ss);
}

char	**ft_split(char const *s, char c)
{
	char	**ss;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = countwords(s, c);
	ss = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!ss)
		return (NULL);
	return (fill(ss, s, c));
}
