/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalkan <akalkan@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:51:21 by akalkan           #+#    #+#             */
/*   Updated: 2026/11/05 15:48:10 by akalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*_s;
	unsigned char		_c;

	_s = s;
	_c = c;
	i = 0;
	while (i < n)
	{
		if (_s[i] == _c)
			return ((void *)&_s[i]);
		i++;
	}
	return (NULL);
}
