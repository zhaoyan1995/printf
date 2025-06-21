/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:10:04 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/21 22:53:55 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

static char	*ft_strdup_prec(char *str, int prec)
{
	char	*str1;
	int		i;
	int		len_str;

	if (ft_strcmp("(null)", str) == 0 && prec >= 0 && prec < 6)
		return (ft_strdup(""));
	if (prec == -1)
		return (ft_strdup(str));
	len_str = ft_strlen(str);
	if (len_str > prec)
		str1 = malloc(prec + 1);
	else
		return (ft_strdup(str));
	if (!str1)
		return (NULL);
	i = 0;
	while (i < prec)
	{
		str1[i] = str[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

int	ft_print_str_s(char *str, t_format_spec *flag)
{
	int		len_str;
	int		num_space;
	int		len_print;
	int		i;
	char	*str1;

	if (!str)
		str1 = ft_strdup_prec("(null)", flag->prec);
	else
		str1 = ft_strdup_prec(str, flag->prec);
	if (!str1)
		return (0);
	len_str = ft_strlen(str1);
	len_print = 0;
	num_space = 0;
	if (len_str < flag->width)
		num_space = flag->width - len_str;
	len_print += ft_print_space(num_space, flag);
	i = 0;
	while (str1[i])
		len_print += write(1, &str1[i++], 1);
	if (num_space > 0 && flag->left_align)
		len_print += ft_print_char(' ', num_space);
	free(str1);
	return (len_print);
}
