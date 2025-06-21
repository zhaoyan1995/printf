/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:10:04 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/21 19:24:56 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_prefix(t_variables *variables,
	t_format_spec *flag)
{
	int	result;

	result = 0;
	if (variables->u > 0 && flag->alt_form)
	{
		if (flag->spec == 'x')
			result += write(1, "0x", 2);
		if (flag->spec == 'X')
			result += write(1, "0X", 2);
	}
	return (result);
}

int	ft_print_unsigned_int(char *str,
	t_format_spec *flag, t_variables *variables)
{
	int	len_str;
	int	num_space;
	int	num_zero;
	int	len_print;

	len_str = ft_strlen(str);
	len_print = 0;
	num_space = cal_nbr_space(flag->width, flag->prec, len_str, flag->zero_pad);
	num_zero = cal_nbr_zero(flag->width, flag->prec, len_str, flag->zero_pad);
	if (len_str + num_space + num_zero == flag->width)
		adjust_space_zero(&num_space, &num_zero, flag, variables);
	len_print += ft_print_space(num_space, flag);
	if (flag->spec != 'u')
		len_print += ft_print_prefix(variables, flag);
	if (num_zero)
		len_print += ft_print_char('0', num_zero);
	len_print += ft_print_str_nbr(str, flag, len_print);
	if (num_space > 0 && flag->left_align)
		len_print += ft_print_char(' ', num_space);
	return (len_print);
}
