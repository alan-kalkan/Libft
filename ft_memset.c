/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalkan <akalkan@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:47:48 by akalkan           #+#    #+#             */
/*   Updated: 2026/11/07 15:55:02 by akalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*_s;
	unsigned char	_c;

	_s = (unsigned char *)s;
	_c = (unsigned char)c;
	while (n --)
		*_s++ = _c;
	return (s);
}
