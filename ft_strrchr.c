/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalkan <akalkan@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:09:56 by akalkan           #+#    #+#             */
/*   Updated: 2026/11/07 13:48:48 by akalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		i;

	ch = (char)c;
	i = ft_strlen(s);
	while (i != 0)
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == ch)
		return ((char *)&s[i]);
	return (NULL);
}
