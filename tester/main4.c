/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 21:42:56 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/12 23:59:08 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int	main(void)
{
	int		i;
	int		j;
	char	*str;

	printf("=== TEST 1 === %%s \n");
	i = ft_printf("|%s|\n", "hello");
	j = printf("|%s|\n", "hello");
	printf("i = %d\n", i);
	printf("j = %d\n", j);
	
	printf("=== TEST 2 === %%s \n");
	str = NULL;
	i = ft_printf("|%s|\n", str);
	j = printf("|%s|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);
	
	printf("=== TEST 3 === %%10s \n");
	str = "abc";
	i = ft_printf("|%10s|\n", str);
	j = printf("|%10s|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== TEST 4 === %%5.3s \n");
	str = "abcdef";
	i = ft_printf("|%5.3s|\n", str);
	j = printf("|%5.3s|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== TEST 5 === %%-10s \n");
	str = "abc";
	i = ft_printf("|%-10s|\n", str);
	j = printf("|%-10s|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== TEST 6 === %%.3s \n");
	str = "hello";
	i = ft_printf("|%.3s|\n", str);
	j = printf("|%.3s|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== TEST 7 === %%.0s \n");
	str = "hello";
	i = ft_printf("|%.0s|\n", str);
	j = printf("|%.0s|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== TEST 8 === %%10.3s \n");
	str = "hello";
	i = ft_printf("|%10.3s|\n", str);
	j = printf("|%10.3s|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== TEST 9 === %%-10.3s \n");
	str = "hello";
	i = ft_printf("|%-10.3s|\n", str);
	j = printf("|%-10.3s|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== TEST 10 === %%5s \n");
	str = NULL;
	i = ft_printf("|%5s|\n", str);
	j = printf("|%5s|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== TEST 11 === %%.5s \n");
	str = NULL;
	i = ft_printf("|%.5s|\n", str);
	j = printf("|%.5s|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== TEST 12 === %%10.5s \n");
	str = NULL;
	i = ft_printf("|%10.5s|\n", str);
	j = printf("|%10.5s|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== TEST 13 === %%4.3s \n");
	str = NULL;
	i = ft_printf("|%4.3s|\n", str);
	j = printf("|%4.3s|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== TEST 14 === %%0s \n");
	str = "abc";
	i = ft_printf("|%0s|\n", str);
	j = printf("|%0s|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== TEST 15 === %%0.0s \n");
	str = "abc";
	i = ft_printf("|%0.0s|\n", str);
	j = printf("|%0.0s|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== TEST 16 === %%5.0s \n");
	str = "abc";
	i = ft_printf("|%5.0s|\n", str);
	j = printf("|%5.0s|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	return (0);
}
