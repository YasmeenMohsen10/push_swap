#include "push_swap.h"

static int min(our_node *stack_a, unsigned int *index)
{
    int i;
    int min;

    i = 0;
    *index = 0;
    min = stack_a -> number;
    while(stack_a)
    {
        if(stack_a -> number < min)
        {
            min = stack_a -> number;
            *index = i;
        }
        stack_a = stack_a -> next;
        i++;
    }
    return min;
}
static int is_sort(our_node *stack_a)
{
    our_node *check;
    while (stack_a -> next)
    {
        check = stack_a -> next;
        if (check -> number > stack_a -> number)
            return (0);
        stack_a = stack_a -> next;
    }
    return (1);
}
#include <stdio.h>
void simple_algo(our_node *stack_a)
{
    our_node *stack_b;
    int     i;
    unsigned int    index;
    int minimum;
    i = 0;
    index = 0;
    stack_b = NULL;
    while(lstsize (stack_a) > 2)
    {
        if(is_sort(stack_a))
           break; 
        minimum = min(stack_a,&index);
        if(index == 0)
        {
            rra_and_rrb(&stack_a,'a');
            pa_and_pb(&stack_a,&stack_b,'b');
        }
        else if(index == lstsize(stack_a) - 1)
        {
            pa_and_pb(&stack_a,&stack_b,'b');
        }
        else if(index == lstsize(stack_a) - 2)
        {
            sa_and_sb(stack_a,'a');
            pa_and_pb(&stack_a,&stack_b,'b');
        }
        else if(index == 1)
        {
            rra_and_rrb(&stack_a,'a');
            rra_and_rrb(&stack_a,'a');
            pa_and_pb(&stack_a,&stack_b,'b');
        }
        else
        {
            while(index != lstsize(stack_a) - 1 )
            {
                min(stack_a,&index);
                rra_and_rrb(&stack_a,'a');
            }
            pa_and_pb(&stack_a,&stack_b,'b');
        }
    }
    if(!is_sort(stack_a))
    {
        sa_and_sb(stack_a,'a');
    } 
    //ft_printf("%i\n",lstsize (stack_b));
    pa_and_pb(&stack_a,&stack_b,'a');
    ft_printf("%i\n",lstsize (stack_b));
    ft_printf("%i\n",stack_b -> number);
    // while (lstsize (stack_b))
    // {
    //     pa_and_pb(&stack_a,&stack_b,'a');
    //      ft_printf("%i",lstsize (stack_b));
    // }
    // // ft_printf("%i\n",lstsize (stack_b));
    // ft_printf("%i",stack_b -> number);
     //pa_and_pb(&stack_a,&stack_b,'a');
    // ft_printf("%i",lstsize (stack_b));
    // ft_printf("%p",stack_b -> number);
    
}
