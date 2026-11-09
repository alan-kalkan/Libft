/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalkan <akalkan@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:21:26 by akalkan           #+#    #+#             */
/*   Updated: 2026/11/09 13:18:52 by akalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_substr(s1, 0, 0));
	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	if (start > end)
		return (ft_substr(s1, 0, 0));
	len = (end - start) + 1;
	return (ft_substr(s1, start, len));
}
