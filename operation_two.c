#include "push_swap.h"

void ra_and_rb(our_node **head, char flag)
{
    our_node *first;

    if (lstsize(*head) < 2)
    return ;
    first = *head;
    *head = first -> next;
    first -> next = NULL;
    lstadd_back(head, first);
    if(flag == 'a')
        write(1, "ra\n", 3);
    else if (flag  == 'b')
        write(1, "rb\n", 3);
    else if (flag  == 'r')
        write(1, "rr\n", 3);
}
void rrr(our_node **a, our_node **b)
{
    ra_and_rb(a, 'r');
    ra_and_rb(b, '\0');
}
