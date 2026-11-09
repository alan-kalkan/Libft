/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalkan <akalkan@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:11:32 by akalkan           #+#    #+#             */
/*   Updated: 2026/11/09 17:36:01 by akalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long n)
{
	int	len;

	len = 0;
	if ( n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len ++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		arr_len;
	char	*str;
	long	nbr;

	nbr = n;
	arr_len = get_len(n);
	str = (char *)malloc(sizeof(char) * (arr_len + 1));
	if (!str)
		return (NULL);
	str[arr_len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[--arr_len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
