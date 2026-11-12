/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:49:10 by ralshraw          #+#    #+#             */
/*   Updated: 2026/11/12 22:57:29 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	frees(char **ptr, size_t i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
}
size_t	count_word(char const *arr, char c)
{
	size_t	num_words;
	size_t	i;

	if (!arr)
		return (0);
	num_words = 0;
	i = 0;
	while (arr[i])
	{
		if (arr[i] != c && (i == 0 || arr[i - 1] == c))
			num_words++;
		i++;
	}
	return (num_words);
}

float disorder(our_node *head)
{
	float		mistakes;
	float		total_pairs;
	our_node	*j;

	mistakes = 0;
	total_pairs = 0;
	while(head)
	{
		j = head -> next;
		while(j)
		{
			total_pairs += 1;
			if(head -> number > j -> number)
				mistakes +=1;
			j = j -> next;
		}
		head = head -> next;
	}
	return (mistakes / total_pairs);
}
