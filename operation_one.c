/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_one.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:01:35 by ralshraw          #+#    #+#             */
/*   Updated: 2026/11/04 17:20:51 by ralshraw         ###   ########.fr       */
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
void pa_and_pb(our_node *a,our_node *b,char flag)
{
    if(flag == 'a')
    {
        if(!lstsize(b))
            return ;
        b = lstlast(b);
        lstadd_back(&a,b);
        ft_printf("pa\n");
    }
    else  if(flag == 'b')
    {
        if(!lstsize(a))
            return ;
        a = lstlast(a);
        lstadd_back(&b,a);
        ft_printf("pb\n");
    }
}
void ra_and_rb(our_node *head,char flag)
{
    int number;
    our_node *temp;
   our_node *temp_tow;
    char c;
    c = flag;
    temp_tow = head;
    while(head -> next)
    {
        temp = head -> next;
        number = temp -> number;
        temp -> number = head -> number;
        head -> number = number;
        head = head -> next;
    }
    number = temp_tow -> number;
    temp_tow -> number = head -> number;
    head -> number = number;
}
