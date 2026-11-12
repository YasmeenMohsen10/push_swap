
#include "push_swap.h"


static void if_it_in_last(our_node **stack_a , our_node **stack_b)
{
    rra_and_rrb(stack_a,'a');
    if(is_sort(*stack_a))
        return;
    pa_and_pb(stack_a,stack_b,'b');
}
static void make_it_to_top(our_node **stack_a,our_node **stack_b)
{
    int index;
    index = 0;
    min(*stack_a,&index);
    while(index != lstsize(*stack_a) - 1 )
    {
        if(index - lstsize(*stack_a) < index - 0)
            ra_and_rb(stack_a,'a');
        else
            rra_and_rrb(stack_a,'a');
        if(is_sort(*stack_a))
            break;
        min(*stack_a,&index);
    }
    pa_and_pb(stack_a,stack_b,'b');
    if(is_sort(*stack_a))
        return;
}
void simple_algo(our_node *stack_a)
{
    our_node    *stack_b;
    int         index;
 
    index = 0;
    stack_b = NULL;
    while(lstsize (stack_a) > 3)
    {
        if(is_sort(stack_a))
            break; 
        min(stack_a , &index);
        if(index == 0)
            if_it_in_last(&stack_a, &stack_b);
        else if(index == lstsize(stack_a) - 1)
            pa_and_pb(&stack_a,&stack_b,'b');
        else
         make_it_to_top(&stack_a,&stack_b);
    }
    if(lstsize (stack_a) == 3 && !is_sort(stack_a))
        sort_three(&stack_a);
    if(!is_sort(stack_a))
        sa_and_sb(stack_a,'a');
    while (lstsize (stack_b))
         pa_and_pb(&stack_a,&stack_b,'a');
 
}
