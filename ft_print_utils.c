/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:10:04 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/21 19:23:59 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	cal_nbr_zero(int width, int prec, int len_str, int zero_pad)
{
	if (prec >= 0 && prec > len_str)
		return (prec - len_str);
	if (prec < 0 && zero_pad && width - len_str > 0)
		return (width - len_str);
	return (0);
}

int	cal_nbr_space(int width, int prec, int len_str, int zero_pad)
{
	if (prec >= 0)
	{
		if (len_str <= prec && prec <= width)
			return (width - prec);
		if (prec <= len_str && len_str <= width)
			return (width - len_str);
	}
	if (prec < 0 && !zero_pad && width - len_str > 0)
		return (width - len_str);
	return (0);
}

void	adjust_space_zero(int *num_space, int *num_zero,
		t_format_spec *flag, t_variables *variables)
{
	if ((flag->spec == 'd' || flag->spec == 'i')
		&& (variables->i < 0 || flag->positive || flag->space))
	{
		if (*num_space)
			(*num_space)--;
		if (*num_zero && flag->prec < 0)
			(*num_zero)--;
	}
	if ((flag->spec == 'x' || flag->spec == 'X'))
	{
		if (*num_space && flag->alt_form && variables->u)
			(*num_space) -= 2;
		else if (*num_zero && flag->prec < 0 && variables->u && flag->alt_form)
			(*num_zero) -= 2;
	}
}

int	ft_print_str_nbr(char *str, t_format_spec *flag, int len_print)
{
	int	result;
	int	len_str;

	result = 0;
	len_str = ft_strlen(str);
	if ((*str == '0' && flag->prec != 0) || *str != '0')
	{
		write(1, str, len_str);
		return (len_str);
	}
	if (*str == '0' && flag->prec == 0)
	{
		if (len_print < flag->width)
			result += write(1, " ", 1);
	}
	return (result);
}

int	ft_print_space(int num_space, t_format_spec *flag)
{
	int	result;

	result = 0;
	if (num_space > 0 && !flag->left_align)
	{
		result += ft_print_char(' ', num_space);
		flag->space = 0;
	}
	result += ft_print_char(' ', flag->space);
	return (result);
}
