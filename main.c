/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:37:21 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/11/04 16:59:52 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

our_node *stack_a(char **str,char **argv)
{
    int i;
    long content;
    our_node *temp;
    our_node *head;

    i = 0;
    head = NULL;
    while(str[i])
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
        i++;
    }
    return (head);
}
#include <stdio.h>
int main(int argc, char **argv)
{
    char    **str;
    int     i;
    our_node *head;
    our_node *h;


    i = 0;
    if (argc == 1)
        return (0);
    str = ft_split(argv[1], ' ');
    if (!str)
        return (0);
    if(!cheak_digit(str,argv))
        return (0);
    head = stack_a(str,argv);
    h = stack_a(str,argv);
    if(!head)
        return (0);
    if(!check_dub(head,str,argv))
        return (0);
    printf("%f\n", disorder(head));
    //sa_and_sb(head,'a');
    our_node *her;
    her = head;
    while(head)
    {
        printf("%ia\n",head -> number);
        head = head -> next;
    }
    our_node *hh;
    hh = h;
    while(h)
    {
        printf("%ib\n",h -> number);
        h = h -> next;
    }
    ra_and_rb(her, 'b');
    while(hh)
    {
        printf("%i\n",hh -> number);
        hh = hh -> next;
    }
}