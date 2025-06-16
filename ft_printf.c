/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:07:36 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/14 21:13:28 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_str_spec_x_u_p(t_format_spec *flag, t_variables *variables)
{
	char	*str;

	if (flag->spec == 'u' || flag->spec == 'x' || flag->spec == 'X')
	{
		if (flag->spec == 'u')
			str = ft_utoa(variables->u);
		else
			str = ft_xtoa(variables->u, flag->spec);
	}
	else
		str = ft_ptoa((unsigned long)(variables->p));
	return (str);
}

int	printf_helper(t_format_spec *flag, t_variables *variables)
{
	int		len_printf;
	char	*str;

	len_printf = 0;
	if (flag->spec == 'd' || flag->spec == 'i')
	{
		str = ft_itoa(variables->i);
		len_printf = ft_print_signed_int(str, flag, variables);
		free(str);
	}
	else if (flag->spec == 's')
		len_printf = ft_print_str_s(variables->s, flag);
	else if (flag->spec == 'c')
		len_printf = ft_print_c((char)variables->i, flag);
	else
	{
		str = get_str_spec_x_u_p(flag, variables);
		if (flag->spec == 'u' || flag->spec == 'x' || flag->spec == 'X')
			len_printf = ft_print_unsigned_int(str, flag, variables);
		else
			len_printf = ft_print_adress(str, flag, variables);
		free (str);
	}
	return (len_printf);
}

int	printf_helper2(t_format_spec *flag, t_variables *variables)
{
	int	return_val;

	return_val = 0;
	if (!variables->percent)
		return_val += printf_helper(flag, variables);
	else
		return_val += write(1, "%", 1);
	return (return_val);
}

int	iterative_format_string(const char *str, va_list *args,
	t_format_spec *flag, t_variables *variables)
{
	int	return_val;
	int	skip_format;

	return_val = 0;
	skip_format = 0;
	while (*str)
	{
		if (*str == '%' && *(str + 1) != '%')
		{
			init_flag(flag);
			ft_memset(variables, 0, sizeof(t_variables));
			skip_format = check_format_spec((char *)str, args, flag, variables);
			if (skip_format)
			{
				str += skip_format;
				return_val += printf_helper2(flag, variables);
				continue ;
			}
		}
		else if (*str == '%' && *(str + 1) == '%')
			str++;
		return_val += write(1, str++, 1);
	}
	return (return_val);
}

int	ft_printf(const char *str, ...)
{
	int				return_val;
	t_format_spec	*flag;
	t_variables		*variables;
	va_list			args;

	if (!str)
		return (-1);
	va_start(args, str);
	return_val = 0;
	flag = malloc(sizeof(t_format_spec));
	if (!flag)
		return (-1);
	variables = malloc(sizeof(t_variables));
	if (!variables)
		return (free(flag), -1);
	return_val = iterative_format_string(str, &args, flag, variables);
	va_end(args);
	free(flag);
	free(variables);
	return (return_val);
}
