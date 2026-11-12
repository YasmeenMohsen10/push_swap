/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_one.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:01:35 by ralshraw          #+#    #+#             */
/*   Updated: 2026/11/12 16:26:51 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa_and_sb(our_node *head, char flag)
{
    our_node *temp;
    int number;
    
    temp = NULL;
    if(lstsize(head) < 2)
        return ;
    if (flag == 'a')
        ft_printf("sa\n");
    else if(flag == 'b')
        ft_printf("sb\n");
    else if(flag == 's')
        ft_printf("ss\n");
    while (head)
    {
        if(!(head -> next -> next))
        {
            temp = head;
            break;
        }
        head = head -> next;
    }
    head = lstlast(head);
    number = temp -> number;
    temp -> number = head -> number;
    head -> number = number ;
}
void ss(our_node *a,our_node *b)
{
    sa_and_sb(a,'s');
    sa_and_sb(b,'\0');
}
void pa_and_pb(our_node **a,our_node **b,char flag)
{
    our_node *bb;
    our_node *aa;

    bb = *b;
    aa = *a;
    if (flag == 'a')
    {
        if(!lstsize(*b))
            return ;
         while(lstsize(*b) > 2 && bb -> next -> next)
             bb = bb -> next;
        lstadd_back(a,lstlast(*b));
        ft_printf("pa\n");
        bb -> next = NULL;
        ft_printf("size of b :%i\n", lstsize(bb));
        ft_printf("the content is: %i\n", lstlast(bb) -> number);
    }
    else  if(flag == 'b')
    {
        while(aa -> next -> next)
            aa = aa -> next;
        if(!lstsize(*a))
            return ;
        lstadd_back(b,lstlast(*a));
        ft_printf("pb\n");
        aa -> next = NULL;
    }
}
void rra_and_rrb(our_node **head,char flag)
{
    our_node *last;
    our_node *current;

    if (lstsize(*head) < 2)
        return ;
    current = *head;
    while (current -> next -> next)
    {
       current = current -> next;
    }
    last = current -> next;
    current -> next = NULL;
    lstadd_front(head, last);
    if(flag == 'a')
        write(1, "rra\n", 4);
    else if (flag  == 'b')
        write(1, "rrb\n", 4);
    else if (flag  == 'r')
        write(1, "rrr\n", 4);
}
void rrr(our_node **a, our_node **b)
{
    ra_and_rb(a, 'r');
    ra_and_rb(b, '\0');
}
