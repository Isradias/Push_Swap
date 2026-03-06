/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:09:03 by icaldas-          #+#    #+#             */
/*   Updated: 2025/11/12 20:17:30 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	num_words;

	i = 0;
	num_words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			if (s[i] == '\0' || s[i] == c)
				num_words++;
		}
	}
	return (num_words);
}

static void	ft_free_split(char **matrix, int i)
{
	while (i > 0)
	{
		free(matrix[i - 1]);
		i--;
	}
	free(matrix);
}

static void	ft_matrix(char const *s, char del, char **matrix)
{
	unsigned int	i;
	size_t			start;
	int				i_word;

	i = 0;
	i_word = 0;
	while (i_word < ft_count_words(s, del))
	{
		while (s[i] == del)
			i++;
		if (s[i] != del && s[i] != '\0')
			start = i;
		while (s[i] != del && s[i] != '\0')
			i++;
		matrix[i_word] = ft_substr(s, start, i - start);
		if (matrix[i_word] == NULL)
		{
			ft_free_split(matrix, i_word);
			break ;
		}
		i_word++;
	}
	matrix[i_word] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char			**matrix;

	if (s == NULL)
		return (NULL);
	matrix = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (matrix == NULL || s == NULL)
		return (NULL);
	ft_matrix(s, c, matrix);
	return (matrix);
}
