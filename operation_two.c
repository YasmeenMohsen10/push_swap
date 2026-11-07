#include "push_swap.h"

void ra_and_rb(our_node **head,char flag)
{
    our_node *last;
    our_node *current;

    if (lstsize(*head) < 2)
        return ;
    current = *head;
    while (current -> next -> next)
    {
       current = current -> next;
    }
    last = current -> next;
    current -> next = NULL;
    lstadd_front(head, last);
    if(flag == 'a')
        write(1, "ra\n", 3);
    else if (flag  == 'b')
        write(1, "rb\n", 3);
    else if (flag  == 'r')
        write(1, "rr\n", 3);
}
void rr(our_node **a, our_node **b)
{make
    ra_and_rb(a, 'r');
    ra_and_rb(b, '\0');
}