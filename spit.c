/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:14:21 by ycharnia          #+#    #+#             */
/*   Updated: 2024/05/10 17:14:30 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clean_up(char **arr, int count);
static void	*count_words(char const *str, char c);
static char	*new_word(char const *s, int i, int count);
static void	init_var(size_t *i, int *count, int *count_w);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	size_s;
	int		count;
	char	**arr_words;
	int		count_w;

	size_s = ft_strlen(s);
	init_var(&i, &count, &count_w);
	arr_words = count_words(s, c);
	while (i <= size_s)
	{
		if (s[i] != c && i != size_s)
			count++;
		if ((s[i] == c || i == size_s) && count > 0)
		{
			arr_words[count_w] = new_word(s, i, count);
			if (!arr_words[count_w])
				clean_up(arr_words, count_w);
			count_w++;
			count = 0;
		}
		i++;
	}
	return (arr_words);
}

static void	clean_up(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static void	*count_words(char const *str, char c)
{
	int		count;
	int		in_word;
	char	**ptr;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		if (*str == c)
			in_word = 0;
		str++;
	}
	ptr = (char **)malloc((count + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	ptr[count] = NULL;
	return (ptr);
}

static char	*new_word(char const *s, int i, int count)
{
	char	*word;
	int		j;

	word = malloc((count + 1) * sizeof(char));
	if (!word)
		return (NULL);
	j = i - 1;
	word[count] = '\0';
	count--;
	while (count >= 0)
		word[count--] = s[j--];
	return (word);
}

static void	init_var(size_t *i, int *count, int *count_w)
{
	*i = 0;
	*count = 0;
	*count_w = 0;
}
