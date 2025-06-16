/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:56:00 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/12 23:54:35 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*init_format_spec(char *str, t_format_spec *flag)
{
	if (!str)
		return (NULL);
	str++;
	while (*str)
	{
		if (*str == '-')
			flag->left_align = 1;
		else if (*str == '+')
			flag->positive = 1;
		else if (*str == ' ')
			flag->space = 1;
		else if (*str == '#')
			flag->alt_form = 1;
		else if (*str == '0')
			flag->zero_pad = 1;
		else
			break ;
		str++;
	}
	return ((char *)str);
}

char	*get_width(char *str, t_format_spec *flag)
{
	while (*str)
	{
		if (*str <= '9' && *str >= '0')
			flag->width = flag->width * 10 + (*str - '0');
		else
			break ;
		str++;
	}
	return (str);
}

char	*get_precision(char *str, t_format_spec *flag)
{
	if (*str != '.')
		return (str);
	str++;
	flag->prec = 0;
	while (*str)
	{
		if (*str <= '9' && *str >= '0')
			flag->prec = flag->prec * 10 + (*str - '0');
		else
			break ;
		str++;
	}
	return (str);
}

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	s1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s1[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

void	init_flag(t_format_spec *flag)
{
	ft_memset(flag, 0, sizeof(t_format_spec));
	flag->prec = -1;
}
