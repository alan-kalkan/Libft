/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalkan <akalkan@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:22:07 by akalkan           #+#    #+#             */
/*   Updated: 2026/11/03 16:34:43 by akalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dst_len;

	dst_len = ft_strlen(dst);
	while (src[j] && j < size)
	{
		dst[dst_len] = src[j];
		j++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (dst_len);
}
