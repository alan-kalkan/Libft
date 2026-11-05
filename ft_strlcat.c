/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalkan <akalkan@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:22:07 by akalkan           #+#    #+#             */
/*   Updated: 2026/11/05 14:27:38 by akalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	int	j;

	j = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len <= size)
		return (dst_len + size);
	while (src[j] && (dst_len + j) < (size - 1))
	{
		dst[dst_len + j] = src[j];
		j++;
	}
	dst[dst_len + j] = '\0';
	return (dst_len + src_len);
}
