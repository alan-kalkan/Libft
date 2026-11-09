/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalkan <akalkan@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:21:03 by akalkan           #+#    #+#             */
/*   Updated: 2026/11/09 19:55:52 by akalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c);
static size_t word_len(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t word;
	size_t	i;
	size_t	len;

	i = 0;
	word = 0;
	if (!s)
		return (NULL);
	arr = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			len = word_len(&s[i], c);
			arr[word] = ft_substr(s, i, len);
			i += len;
			word++;
		}
	}
	arr[word] = NULL;
	return (arr);
}

static int	word_count(const char *s, char c)
{
	size_t	i;
	size_t	word;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			word++;
		while (s[i] && s[i] != c)
		{
			i++;
		}
	}
	return (word);
}

static size_t word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}
