/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:49:02 by ralshraw          #+#    #+#             */
/*   Updated: 2026/11/13 09:53:56 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_dub(our_node *head,char **str,char **argv)
{
    our_node *i;
    our_node *j;
    i = head;
    while(i)
    {
        j = i -> next;
        while(j)
        {
            if(i -> number == j -> number)
            {
                write(2,"Error\n",6);
                lstclear(&head);
                frees(str,count_word(*argv,' '));
                return (0);
            }    
            j = j -> next;
        }
        i = i -> next;
    }
    return (1);
}
int cheak_digit(char **str,char **argv)
{
    int i;
    i = 0;
    while(str[i])
    {
        if(!is_digital(str[i]))
        {
            write(2,"Error\n",6);
            frees(str,count_word(*argv,' '));
            return (0);
        }
        i++;
    }
    return (1);
}
int check_range(char **str,char **argv,our_node *head,long content)
{
        if(content > 2147483647 || content < -2147483648 )
        {
            write(2,"Error\n",6);
            lstclear(&head);
            frees(str,count_word(*argv,' '));
            return (0);
        }
        return (1);
}
int is_digital(char *str)
{
    int i;

    i = 0;
    if(str[i]=='-' ||str[i]=='+')
    {
        i++;
        if(!str[i])
            return (0);
        while(str[i])
        {
            if(!ft_isdigit(str[i]))
                return (0);
            i++;
        }
        return (1);
    }
    while(str[i])
    {
        if(!ft_isdigit(str[i]))
        {
            return (0);
        }
            i++;
    }
    return (1);
}
