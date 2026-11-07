/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:37:21 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/11/07 20:48:28 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

our_node *stack_a(char **str,char **argv)
{
    int i;
    long content;
    our_node *temp;
    our_node *head;

    i = count_word(argv[1], ' ');
    head = NULL;
    while(--i >= 0)
    {
        content = ft_atoi(str[i]);
        if(!check_range(str,argv,head,content))
            return(NULL);
        temp = lstnew(content);
        if (!temp)
        {
            lstclear(&head);
            frees(str,count_word(argv[1],' '));
           return(NULL);  
        }
        lstadd_back(&head,temp);
    }
    return (head);
}
#include <stdio.h>
int main(int argc, char **argv)
{
    char    **str;
    our_node *head;

    if (argc == 1)
        return (0);
    str = ft_split(argv[1], ' ');
    if (!str)
        return (0);
    if(!cheak_digit(str,argv))
        return (0);
    head = stack_a(str,argv);
    if(!head)
        return (0);
    if(!check_dub(head,str,argv))
        return (0);
}
