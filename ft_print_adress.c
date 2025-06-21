/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:10:04 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/21 20:03:52 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_len_prefix(uintptr_t i)
{
	if (i)
		return (2);
	return (0);
}

int	ft_print_adress(char *str,
	t_format_spec *flag, t_variables *variables)
{
	int		len_str;
	int		num_space;
	int		len_print;
	int		prefix;
	char	*str1;

	prefix = ft_len_prefix((uintptr_t)variables->p);
	if ((uintptr_t)variables->p)
		str1 = ft_strdup(str);
	else
		str1 = ft_strdup("(nil)");
	len_str = ft_strlen(str1) + prefix;
	len_print = 0;
	num_space = 0;
	if (flag->width - len_str > 0)
		num_space = flag->width - len_str;
	len_print += ft_print_space(num_space, flag);
	len_print += write(1, "0x", prefix);
	len_print += ft_print_str_nbr(str1, flag, len_print);
	if (num_space && flag->left_align)
		len_print += ft_print_char(' ', num_space);
	free(str1);
	return (len_print);
}
