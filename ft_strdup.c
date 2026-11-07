/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalkan <akalkan@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 13:26:18 by akalkan           #+#    #+#             */
/*   Updated: 2026/11/06 14:25:18 by akalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*_s;
	size_t	i;

	i = 0;
	_s = (char *)malloc(ft_strlen(s) + 1);
	if (!_s)
		return (NULL);
	while (s[i])
	{
		_s[i] = s[i];
		i++;
	}
	_s[i] = '\0';
	return (_s);
}
