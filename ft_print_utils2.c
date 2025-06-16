/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:47:24 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/14 21:11:04 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		write(1, &c, 1);
		i++;
	}
	return ((int)i);
}

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*str1;
	size_t	i;

	if (!str)
		return (NULL);
	str1 = malloc(ft_strlen(str) + 1);
	if (!str1)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str1[i] = str[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
