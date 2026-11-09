/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalkan <akalkan@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:21:03 by akalkan           #+#    #+#             */
/*   Updated: 2026/11/09 18:12:11 by akalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
//

int	word_count(const char *s, char c);
static size_t word_len(char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t word;
	size_t	i;

	arr = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	while (s[i])
	{
		if (s[i] == c)
			i++;

		i++;
	}
	return (arr);
}

int	word_count(const char *s, char c)
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
			write(1, &s[i], 1);
			i++;
		}
	}
	return (word);
}

static size_t word_len(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	//ft_split("AB-CD-abcd", '-');
	printf("%ld", word_len("abcd-ad-ad", '-'));


}
