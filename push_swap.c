/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 15:27:55 by isalem            #+#    #+#             */
/*   Updated: 2025/09/27 21:37:49 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isnum(char *c)
{
	int i;

    i = 0;
    if ((c[0] == '+' || c[0] == '-') && c[1])
        i++;
    while (c[i])
    {
        if (c[i] <= '9' && c[i] >= '0')
	    {
	    	i++;
	    }
	    else
	    {
	    	return (0);
	    }
    }
    return (1);
}
static long	ft_atol(char *nptr)
{
	int	sign;
	long	res;
	int	i;

	i = 0;
	sign = 1;
	res = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] <= '9' && nptr[i] >= '0')
		res = 10 * res + (nptr[i++] - '0');
	return (res * sign);
}
static int ft_limit(char *num)
{
    int i;
    int j;
    long nbr;

    i = 0;
    j = 0;
    nbr = ft_atol(num);
    if(num[i] == '-' || num[i] == '+')
        i++;
    while (num[i] == '0')
        i++;
    while (num[j])
        j++;
    if ((j - i) > 10)
        return (0);
    else if (nbr < -2147483648 || nbr > 2147483647)
         return (0);
    else
        return(1);
}
static int ft_exist(char **arr)
{
    long num1;
    long i;
    long j;

    i = 1;
    j = 1;
    while (arr[i])
    {
        num1 = ft_atol(arr[i]);
        j = i + 1;
        while (arr[j])
        {
            if ((ft_atol(arr[j])) == num1)
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}
int main (int arc, char** arv)
{
    int i;
    long num;
    t_list** lst;

    i = 1;
    num = 0;
    lst = malloc(sizeof(t_list*)* (arc - 1));
    while(arv[i])
    {
        if (!ft_isnum(arv[i]) || !ft_limit(arv[i]) || ft_exist(arv))
        {
                write(1, "Error\n", 6);
                break;
        }   
        else
        {
            num = ft_atol(arv[i]);
            ft_lstadd_back(lst, ft_lstnew(&num));
           // printf("%ld\n", *((long *)(*lst)->content));
            //(*lst) = (*lst)->next;
        }
        i++;
    }
    
}
