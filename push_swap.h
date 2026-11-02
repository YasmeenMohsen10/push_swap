#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "printf/ft_printf.h"
typedef struct our_node
{
    int number;
    struct our_node *next;
}  our_node;
void	frees(char **ptr, size_t i);
size_t	count_word(char const *arr, char c);
our_node *lstnew(int content);
void	lstadd_back(our_node **lst, our_node *new);
our_node	*lstlast(our_node *lst);
void	lstclear(our_node **lst);
void	lstdelone(our_node *lst);
int check_dub(our_node *head,char **str,char **argv);
int cheak_digit(char **str,char **argv);
int check_range(char **str,char **argv,our_node *head,long content);
int is_digital(char *str);
#endif
