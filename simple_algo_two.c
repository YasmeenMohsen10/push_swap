#include "push_swap.h"

int is_sort(our_node *stack_a)
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
void min(our_node *stack_a, int *index)
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
}
void max(our_node *stack_a, int *index)
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
    int    index;
    index = 0;
    max(*a,&index);
    if(index == 2)
    {
        ra_and_rb(a,'a');
    }
    else if(index == 1)
    {
      rra_and_rrb(a,'a');
    }
    if(!is_sort(*a))
        sa_and_sb(*a,'a'); 
}