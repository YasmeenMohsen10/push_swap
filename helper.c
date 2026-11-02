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
