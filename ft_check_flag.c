/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:07:36 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/14 21:20:42 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	reset_flag_common(t_format_spec *flag)
{
	if (flag->positive != 0 && flag->space != 0)
		flag->space = 0;
	if (flag->zero_pad != 0 && flag->left_align)
		flag->zero_pad = 0;
	if (flag->prec >= 0 && flag->zero_pad != 0)
		flag->zero_pad = 0;
}

void	reset_flag_by_specifier(t_format_spec *flag, t_variables *variables)
{
	if (flag->spec == 'c' || flag->spec == 's' || flag->spec == 'p')
	{
		flag->positive = 0;
		flag->space = 0;
		flag->alt_form = 0;
		flag->zero_pad = 0;
		if (flag->spec == 'c' || flag->spec == 'p')
			flag->prec = 0;
	}
	else if (flag->spec == 'd' || flag->spec == 'i')
	{
		flag->alt_form = 0;
		if ((flag->space != 0 || flag->positive != 0) && variables->i < 0)
		{
			flag->space = 0;
			flag->positive = 0;
		}
	}
	else if (flag->spec == 'x' || flag->spec == 'X' || flag->spec == 'u')
	{
		flag->positive = 0;
		flag->space = 0;
		if (flag->spec == 'u')
			flag->alt_form = 0;
	}
}

int	is_specifier(char c)
{
	if (c == 'c' || c == 's'
		|| c == 'p' || c == 'd'
		|| c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	check_format_spec(char *str, va_list *args,
	t_format_spec *flag, t_variables *variables)
{
	int	len_str_original;

	len_str_original = ft_strlen(str);
	str = init_format_spec(str, flag);
	str = get_width(str, flag);
	str = get_precision(str, flag);
	if (is_specifier(*str))
	{
		flag->spec = *str;
		if (*str == 'c' || *str == 'd' || *str == 'i')
			variables->i = va_arg(*args, int);
		else if (*str == 'u' || *str == 'x' || *str == 'X')
			variables->u = va_arg(*args, unsigned int);
		else if (*str == 's')
			variables->s = va_arg(*args, char *);
		else if (*str == 'p')
			variables->p = va_arg(*args, void *);
		else if (*str == '%')
			variables->percent = 1;
		reset_flag_common(flag);
		reset_flag_by_specifier(flag, variables);
	}
	else
		return (init_flag(flag), 0);
	return (len_str_original - ft_strlen(++str));
}
