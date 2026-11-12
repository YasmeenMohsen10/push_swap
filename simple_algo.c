#include "push_swap.h"
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


static void max(our_node *stack_a, unsigned int *index)
{
    int i;
    int max;

    i = 0;
    *index = 0;
    max = stack_a -> number;
    while(stack_a)
    {
        if(stack_a -> number > max)
        {
            max = stack_a -> number;
            *index = i;
        }
        stack_a = stack_a -> next;
        i++;
    }
}
void sort_three(our_node **a)
{
    unsigned int    index;
    index = 0;
    max(*a,&index);
    if(index == 2)
    {
        rra_and_rrb(a,'a');
        if(is_sort(*a))
            return ;
        sa_and_sb(*a,'a'); 
    }
    if(index == 1)
    {
      ra_and_rb(a,'a');
      if(is_sort(*a))
        return ; 
        sa_and_sb(*a,'a'); 
    }
}

#include <stdio.h>
void simple_algo(our_node *stack_a)
{
    our_node *stack_b;
    unsigned int    index;
    int minimum;

    (void) minimum;
    index = 0;
    stack_b = NULL;
    minimum = 0;
    if(lstsize (stack_a) == 3)
    {
            if(is_sort(stack_a))
            return ;
            sort_three(&stack_a);
            return ;
    }
    while(lstsize (stack_a) > 3)
    {
        if(is_sort(stack_a))
           break; 
        minimum = min(stack_a,&index);
        if(index == 0)
        {
            rra_and_rrb(&stack_a,'a');
             if(is_sort(stack_a))
            break;
            pa_and_pb(&stack_a,&stack_b,'b');
        }
        else if(index == lstsize(stack_a) - 1)
        {
            pa_and_pb(&stack_a,&stack_b,'b');
            if(is_sort(stack_a))
           break;
        }
        else if(index == lstsize(stack_a) - 2)
        {
            sa_and_sb(stack_a,'a');
            if(is_sort(stack_a))
           break;
            pa_and_pb(&stack_a,&stack_b,'b');
        }
        else if(index == 1)
        {
            rra_and_rrb(&stack_a,'a');
            
            rra_and_rrb(&stack_a,'a');
             if(is_sort(stack_a))
           break;
            pa_and_pb(&stack_a,&stack_b,'b');
        }
        else
        {
            while(index != lstsize(stack_a) - 1 )
            {
                min(stack_a,&index);
                rra_and_rrb(&stack_a,'a');
                 if(is_sort(stack_a))
                break;
            }
            pa_and_pb(&stack_a,&stack_b,'b');
             if(is_sort(stack_a))
            break;
        }
    }
    if(!is_sort(stack_a))
    {
        sa_and_sb(stack_a,'a');
    } 
    //ft_printf("%i\n",lstsize (stack_b));
    // pa_and_pb(&stack_a,&stack_b,'a');
    // ft_printf("%i\n",lstsize (stack_b));
    // ft_printf("%i\n",stack_b -> number);
        // ft_printf("%i\n",lstsize (stack_b));
        // ft_printf("%i\n",lstsize (stack_a));
        // pa_and_pb(&stack_a,&stack_b,'a');
        //  ft_printf("%i\n",lstsize (stack_b));
        //  ft_printf("%i\n",lstsize (stack_a));

    while (lstsize (stack_b))
    {
         pa_and_pb(&stack_a,&stack_b,'a');
         //ft_printf("%i",lstsize (stack_b));
    }
    // // ft_printf("%i\n",lstsize (stack_b));
    // ft_printf("%i",stack_b -> number);
     //pa_and_pb(&stack_a,&stack_b,'a');
    // ft_printf("%i",lstsize (stack_b));
    // ft_printf("%p",stack_b -> number);
    
}
