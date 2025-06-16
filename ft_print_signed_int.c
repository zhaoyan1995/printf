/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_signed_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:10:04 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/14 19:22:53 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_sign(t_variables *variables,
	t_format_spec *flag, int num_space, int num_zero)
{
	int	result;

	result = 0;
	if (variables->i < 0)
		result += write(1, "-", 1);
	else if (flag->positive && variables->i >= 0)
	{
		if (variables->i == 0 && num_space && !num_zero && !flag->prec)
			result += write(1, " +", 2);
		else
			result += write(1, "+", 1);
	}
	return (result);
}

int	ft_print_signed_int(char *str, t_format_spec *flag, t_variables *variables)
{
	int	len_str;
	int	num_space;
	int	num_zero;
	int	len_print;

	len_str = ft_strlen(str);
	len_print = 0;
	if (variables->i < 0)
		flag->positive = 0;
	num_space = cal_nbr_space(flag->width, flag->prec, len_str, flag->zero_pad);
	num_zero = cal_nbr_zero(flag->width, flag->prec, len_str, flag->zero_pad);
	if (len_str + num_space + num_zero == flag->width)
		adjust_space_zero(&num_space, &num_zero, flag, variables);
	if (flag->space)
		len_print += write(1, " ", 1);
	if (num_space >= 0 && !flag->left_align)
		len_print += ft_print_char(' ', num_space);
	len_print += ft_print_sign(variables, flag, num_space, num_zero);
	if (num_zero)
		len_print += ft_print_char('0', num_zero);
	len_print += ft_print_str_nbr(str, flag, len_print);
	if (num_space >= 0 && flag->left_align)
		len_print += ft_print_char(' ', num_space);
	return (len_print);
}
