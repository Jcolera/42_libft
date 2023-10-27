/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:01:52 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/27 21:34:39 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static size_t	get_init_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void	free_memory(size_t i, char **str)
{
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
}

static char	**to_split(const char *s, char c, char **str, size_t w_count)
{
	size_t	word;
	size_t	i;

	word = 0;
	i = 0;
	while (word < w_count)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		str[word] = ft_substr(s, i, get_init_len(&s[i], c));
		if (str[word] == NULL)
		{
			free_memory(word, str);
			return (NULL);
		}
		while (s[i] != '\0' && s[i] != c)
			i++;
		word++;
	}
	str[word] = NULL;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**ptr_str;
	size_t	words;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	ptr_str = (char **)malloc((words + 1) * sizeof(char *));
	if (ptr_str == NULL)
		return (NULL);
	ptr_str = to_split(s, c, ptr_str, words);
	return (ptr_str);
}
