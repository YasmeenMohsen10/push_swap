#include "push_swap.h"

void rra_and_rrb(our_node **head, char flag)
{
    our_node *first;

    if (lstsize(*head) < 2)
    return ;
    first = *head;
    *head = first -> next;
    first -> next = NULL;
    lstadd_back(head, first);
    if(flag == 'a')
        write(1, "rra\n", 4);
    else if (flag  == 'b')
        write(1, "rrb\n", 4);
    else if (flag  == 'r')
        write(1, "rrr\n", 4);
}
void rr(our_node **a, our_node **b)
{
    rra_and_rrb(a, 'r');
    rra_and_rrb(b, '\0');
}
