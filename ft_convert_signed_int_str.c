/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_signed_int_str.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:03:40 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/14 00:54:06 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nbr_digit_signed_int(int nbr)
{
	int	result;

	if (nbr == 0)
		return (1);
	result = 0;
	while (nbr != 0)
	{
		result++;
		nbr = nbr / 10;
	}
	return (result);
}

static int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	*ft_itoa(int nbr)
{
	int		size;
	char	*str;

	if (nbr == -2147483648)
	{
		str = ft_strdup("2147483648");
		if (!str)
			return (NULL);
		return (str);
	}
	nbr = ft_abs(nbr);
	size = nbr_digit_signed_int(nbr);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	if (nbr == 0)
		str[0] = '0';
	str[size--] = '\0';
	while (nbr != 0)
	{
		str[size] = nbr % 10 + '0';
		nbr = nbr / 10;
		size--;
	}
	return (str);
}
