/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:13:26 by ralshraw          #+#    #+#             */
/*   Updated: 2026/11/04 17:01:18 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
unsigned int	lstsize(our_node *lst);
float disorder(our_node *head);
void sa_and_sb(our_node *head, char flag);
void ss(our_node *a,our_node *b);
void pa_and_pb(our_node *a,our_node *b,char flag);
void ra_and_rb(our_node *head,char flag);
#endif
