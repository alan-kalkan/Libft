/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalkan <akalkan@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 14:32:27 by akalkan           #+#    #+#             */
/*   Updated: 2026/11/07 16:10:18 by akalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates memory (using malloc(3))
	 and returns a substring from the string ’s’.
	The substring starts at index ’start’ and has a
	maximum length of ’len’.*/
#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub_str;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
		len = 0;
	else if (len > i - start)
		len = i - start;
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	j = 0;
	while (j < len)
	{
		sub_str[j] = s[start + j];
		j++;
	}
	sub_str[j] = '\0';
	return (sub_str);
}
