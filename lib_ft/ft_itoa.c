/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:32:49 by isalem            #+#    #+#             */
/*   Updated: 2025/08/10 20:53:15 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digit(long n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int x)
{
	size_t	countd;
	char	*c;
	size_t	i;
	long	n;

	n = (long)x;
	countd = count_digit(n);
	c = (char *)malloc(countd + 1);
	i = 0;
	if (!c)
		return (NULL);
	if (n < 0)
	{
		c[0] = '-';
		n = -n;
		i = 1;
	}
	c[countd] = '\0';
	while (countd > i)
	{
		c[countd - 1] = n % 10 + '0';
		n = n / 10;
		countd--;
	}
	return (c);
}
