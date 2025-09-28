/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 15:11:43 by isalem            #+#    #+#             */
/*   Updated: 2025/09/27 15:12:47 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void    sa(t_list **a)
{
    t_list *f;
    t_list *s;

    if (*a && (*a)->next)
    {
        f = *a;
        s = f->next;
        f->next = s->next;
        s->next = f;
        *a = s;
        write(1, "sa\n", 3);
    }
}

void    sb(t_list **b)
{
    t_list *f;
    t_list *s;

    if(*(b) && (*b)->next)
    {
        f = *b;
        s = f->next;
        f->next = s->next;
        s->next = f;
        *b = s;
        write(1, "sb\n", 3);
    }
}

void    ss(t_list **a, t_list **b)
{
    sa(a);
    sb(b);
    write(1, "ss\n", 3);
}

void    pa(t_list **a, t_list **b)
{
    t_list *tmp;

    if (*b)
    {
        tmp = *b;
        *b = (*b)->next;
        tmp->next = *a;
        *a = tmp;
        write(1, "pa\n", 3);
    }
}

void    pb(t_list **a, t_list **b)
{
    t_list *tmp;

    if (*a)
    {
        tmp = *a;
        *a = (*a)->next;
        tmp->next = *b;
        *b = tmp;
        write(1, "pb\n", 3);
    }
}

void    ra(t_list **a)
{
    t_list *f;
    t_list *l;

    if (*a && (*a)->next)
    {
        f = *a;
        l = *a;
        while (l->next)
            l = l->next;
        *a = f->next;
        f->next = NULL;
        l->next = f;
        write(1, "ra\n", 3);
    }
}

void    rb(t_list **b)
{
    t_list *f;
    t_list *l;

    if (*b && (*b)->next)
    {
        f = *b;
        l = *b;
        while (l->next)
            l = l->next;
        *b = f->next;
        f->next = NULL;
        l->next = f;
        write(1, "rb\n", 3);
    }
}

void    rr(t_list **a, t_list **b)
{
    ra(a);
    rb(b);
    write(1, "rr\n", 3);
}

void    rra(t_list **a)
{
    t_list *newl;
    t_list *l;

    if (*a && (*a)->next)
    {
        newl = NULL;
        l = *a;
        while (l->next)
        {
            newl = l;
            l = l->next;
        }
        newl->next = NULL;
        l->next = *a;
        *a = l;
        write(1, "rra\n", 4);
    }
}

void    rrb(t_list **b)
{
    t_list *newl;
    t_list *l;

    if (*b && (*b)->next)
    {
        newl = NULL;
        l = *b;
        while (l->next)
        {
            newl = l;
            l = l->next;
        }
        newl->next = NULL;
        l->next = *b;
        *b = l;
        write(1, "rrb\n", 4);
    }
}

void    rrr(t_list **a, t_list **b)
{
    rra(a);
    rrb(b);
    write(1, "rrr\n", 4);
}
