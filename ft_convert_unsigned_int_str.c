/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_unsigned_int_str.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:03:40 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/12 23:55:12 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nbr_digit_unsigned_int(unsigned int nbr)
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

char	*ft_utoa(unsigned int nbr)
{
	int		size;
	char	*str;

	size = nbr_digit_unsigned_int(nbr);
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

static int	nbr_digit_unsigned_int_hex(unsigned int nbr)
{
	int	result;

	if (nbr == 0)
		return (1);
	result = 0;
	while (nbr != 0)
	{
		result++;
		nbr = nbr / 16;
	}
	return (result);
}

char	*ft_xtoa(unsigned int nbr, char flag_spec)
{
	int		size;
	char	*lower_hex;
	char	*upper_hex;
	char	*str;

	size = nbr_digit_unsigned_int_hex(nbr);
	lower_hex = "0123456789abcdef";
	upper_hex = "0123456789ABCDEF";
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	if (nbr == 0)
		str[0] = '0';
	str[size--] = '\0';
	while (nbr != 0)
	{
		if (flag_spec == 'x')
			str[size] = lower_hex[nbr % 16];
		else
			str[size] = upper_hex[nbr % 16];
		nbr = nbr / 16;
		size--;
	}
	return (str);
}
