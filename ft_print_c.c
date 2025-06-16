/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:10:04 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/12 23:55:41 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(char c, t_format_spec *flag)
{
	int	num_space;
	int	len_print;

	len_print = 0;
	num_space = 0;
	if (flag->width)
		num_space = flag->width - 1;
	len_print += ft_print_space(num_space, flag);
	len_print += write(1, &c, 1);
	if (num_space && flag->left_align)
		len_print += ft_print_char(' ', num_space);
	return (len_print);
}
