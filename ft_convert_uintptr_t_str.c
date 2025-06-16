/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_long_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:03:40 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/16 20:16:42 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nbr_digit_unsigned_int_hex(unsigned long nbr)
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

char	*ft_ptoa(uintptr_t nbr)
{
	int		size;
	char	*lower_hex;
	char	*str;

	size = nbr_digit_unsigned_int_hex(nbr);
	lower_hex = "0123456789abcdef";
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	if (nbr == 0)
		str[0] = '0';
	str[size--] = '\0';
	while (nbr != 0)
	{
		str[size] = lower_hex[nbr % 16];
		nbr = nbr / 16;
		size--;
	}
	return (str);
}
