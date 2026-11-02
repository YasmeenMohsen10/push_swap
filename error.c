#include "push_swap.h"


int check_dub(our_node *head,char **str,char **argv)
{
    our_node *i;
    our_node *j;
    i = head;
    while(i)
    {
        j = i -> next;
        while(j)
        {
            if(i -> number == j -> number)
            {
                ft_printf("Error \n");
                lstclear(&head);
                frees(str,count_word(argv[1],' '));
                return (0);
            }    
            j = j -> next;
        }
        i = i -> next;
    }
    return (1);
}
int cheak_digit(char **str,char **argv)
{
    int i;
    i = 0;
    while(str[i])
    {
        if(!is_digital(str[i]))
        {
            ft_printf("Error \n");
            frees(str,count_word(argv[1],' '));
            return (0);
        }
        i++;
    }
    return (1);
}
int check_range(char **str,char **argv,our_node *head,long content)
{
        if(content > 2147483647 || content < -2147483648 )
        {
            ft_printf("Error \n");
            lstclear(&head);
            frees(str,count_word(argv[1],' '));
            return (0);
        }
        return (1);
}
int is_digital(char *str)
{
    int i;

    i = 0;
    if(str[i]=='-' ||str[i]=='+')
    {
        i++;
        if(!str[i])
            return (0);
        while(str[i])
        {
            if(!ft_isdigit(str[i]))
                return (0);
            i++;
        }
        return (1);
    }
    while(str[i])
    {
        if(!ft_isdigit(str[i]))
        {
            return (0);
        }
            i++;
    }
    return (1);
}
