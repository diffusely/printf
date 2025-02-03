/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noavetis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:25:56 by noavetis          #+#    #+#             */
/*   Updated: 2025/01/26 20:55:48 by noavetis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

static size_t	word_size(const char **ptr, char c)
{
	size_t	i;

	while (**ptr && **ptr == c)
		(*ptr)++;
	i = 0;
	while ((*ptr)[i] && (*ptr)[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	size_t		size;
	size_t		j;
	size_t		i;

	i = 0;
	size = word_count(s, c);
	result = (char **)malloc((size + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < size)
	{
		result[i] = (char *)malloc(word_size(&s, c) + 1);
		if (!result[i])
			return (NULL);
		j = 0;
		while (*s && *s != c)
			result[i][j++] = *(s++);
		result[i][j] = '\0';
		i++;
	}
	result[i] = NULL;
	return (result);
}
