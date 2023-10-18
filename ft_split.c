/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:01:52 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/18 21:05:15 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Funcion para contar palabras

size_t	count_words(const char *s, char c)
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
		else if (s[i] == c)
			i++;
	}
	return (count);
}

// Funcion para conocer el inicio de mi palabra

size_t	get_init_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

// Funcion para liberar memoria

static void	free_memory(size_t i, char **str)
{
	while (i > 0)
	{
		i--;
		free(*(str + i));
	}
	free(str);
}

// funcion para hacer hacer split

static char	**to_split(const char *s, char c, char **str, size_t w_count)
{
	size_t	row;
	size_t	col;

	row = 0;
	col = 0;
	while (row < w_count)
	{
		while (*(s + col) != '\0' && *(s + col) == c)
		{
			col++;
		}
		*(str + row) = ft_substr(s, col, get_init_len(&*(s + col), c));
		if (*(str + row) == NULL)
		{
			free_memory(row, str);
			return (NULL);
		}
		while (*(s + col) != '\0' && *(s + col) != c)
		{
			col++;
		}
		row++;
	}
	*(str + row) = NULL;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	size_t	words;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	str = (char **)malloc((words + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	str = to_split(s, c, str, words);
	return (str);
}