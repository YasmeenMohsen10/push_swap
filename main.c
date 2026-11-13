/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:37:21 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/11/13 14:17:41 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

our_node *stack_a(char **str,char **argv)
{
    int i;
    long content;
    our_node *temp;
    our_node *head;

    i = count_word(*argv, ' ');
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
            frees(str,count_word(*argv,' '));
           return(NULL);  
        }
        lstadd_back(&head,temp);
    }
    return (head);
}

#include <stdio.h>
int main(int argc, char **argv)
{
    int     flag[6];
    char    **str;
    int     i;
    char *ptr;
    char *temp;
    our_node *head;
    i = 1;
    ptr = ft_strdup("");
    ft_bzero(flag,sizeof(int)*6);
    if (argc == 1)
        return (0);
    if(ft_strncmp("--bench",argv[i],7) == 0)
    {
        flag[0] = 1;
        i++;
    }
    if(i < argc)
    {
        if(ft_strncmp("--simpl",argv[i],8) ==  0)
        flag[1] = 1;
        else if(ft_strncmp("--adaptive",argv[i],10) == 0 )
        flag[2] = 1;
        else if(ft_strncmp("--complex",argv[i],9) == 0 )
        flag[3] = 1;
        if(flag[1] || flag[2] || flag[3])
            i++;
    }
    if(i == argc - 1)
    {
        str = ft_split(argv[i], ' ');
         if (!str)
            return (0);
         if(!cheak_digit(str,&argv[i]))
            return (0);
        head = stack_a(str,&argv[i]);
        if(!head)
            return (0);
        if(!check_dub(head,str,&argv[i]))
            return (0);
    }
    else
    {
        while(i < argc)
        {
            temp = ft_strjoin(ptr,argv[i]);
            free(ptr);
            ptr = temp;
            if(i < argc - 1)
            {
            temp = ft_strjoin(ptr," ");
            free(ptr);
            ptr = temp;
            }
            i++;
        }
        str = ft_split(ptr, ' ');
         if (!str)
            return (0);
         if(!cheak_digit(str,&ptr))
            return (0);
        head = stack_a(str,&ptr);
        if(!head)
            return (0);
        if(!check_dub(head,str,&ptr))
            return (0);
    }
    //ft_printf("%i\n",lstlast(head) -> number);
    // while(head)
    // {
    //     printf ("%i\n", head -> number);
    //     head = head -> next;
    // }
    simple_algo(head);
    lstclear(&head);
    frees(str,3);
    free(ptr);
}
