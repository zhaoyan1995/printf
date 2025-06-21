/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:39:16 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/12 23:58:52 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int	main(void)
{
	unsigned int	i;
	int		j;
	int		k;
	int		a;

	i = 42;
	printf("===TEST 1: %%5u===\n");
	j = ft_printf("|%5u|\n", i);
	k = printf("|%5u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 123;
	printf("===TEST 2: %%1u===\n");
	j = ft_printf("|%1u|\n", i);
	k = printf("|%1u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===TEST 3: %%10u===\n");
	j = ft_printf("|%10u|\n", i);
	k = printf("|%10u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 42;
	printf("===TEST 4: %%.5u===\n");
	j = ft_printf("|%.5u|\n", i);
	k = printf("|%.5u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===TEST 5: %%.0u===\n");
	j = ft_printf("|%.0u|\n", i);
	k = printf("|%.0u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	a = 0;
	printf("===TEST 6: %%.3d int a= 0 ===\n");
	j = ft_printf("|%.3d|\n", a);
	k = printf("|%.3d|\n", a);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 1;
	printf("===TEST 7: %%05u===\n");
	j = ft_printf("|%05u|\n", i);
	k = printf("|%05u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 8: %%-5u===\n");
	j = ft_printf("|%-5u|\n", i);
	k = printf("|%-5u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 9: %%0.5u===\n");
	j = ft_printf("|%0.5u|\n", i);
	k = printf("|%0.5u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 10: %%0u===\n");
	j = ft_printf("|%0u|\n", i);
	k = printf("|%0u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 11: %%+u  ===\n");
	j = ft_printf("|%+u|\n", i);
	k = printf("|%+u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 12: %% u===\n");
	j = ft_printf("|% u|\n", i);
	k = printf("|% u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 13: %%8.5u, input 42===\n");	
	j = ft_printf("|%8.5u|\n", i);
	k = printf("|%8.5u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 14: %%-8.5u ===\n");
	j = ft_printf("|%-8.5u|\n", i);
	k = printf("|%-8.5u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 15: %%08.5u ===\n");
	j = ft_printf("|%08.5u|\n", i);
	k = printf("|%08.5u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 16: %%08u ===\n");
	j = ft_printf("|%08u|\n", i);
	k = printf("|%08u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 17: %%-.5u ===\n");
	j = ft_printf("|%-.5u|\n", i);
	k = printf("|%-.5u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 4294967295;
	printf("===TEST 18: %%020.15u ===\n");
	j = ft_printf("|%020.15u|\n", i);
	k = printf("|%020.15u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 1;
	printf("===TEST 19: %%3.5u ===\n");
	j = ft_printf("|%3.5u|\n", i);
	k = printf("|%3.5u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 1;
	printf("===TEST 20: %%7.2u ===\n");
	j = ft_printf("|%7.2u|\n", i);
	k = printf("|%7.2u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);
	
	i = 1;
	printf("===TEST 21: %%07.2u ===\n");
	j = ft_printf("|%07.2u|\n", i);
	k = printf("|%07.2u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===TEST 22: %%u ===\n");
	j = ft_printf("|%u|\n", i);
	k = printf("|%u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===TEST 23: %%5u ===\n");
	j = ft_printf("|%5u|\n", i);
	k = printf("|%5u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===TEST 24: %%05u ===\n");
	j = ft_printf("|%05u|\n", i);
	k = printf("|%05u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===TEST 25: %%.0u ===\n");
	j = ft_printf("|%.0u|\n", i);
	k = printf("|%.0u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===TEST 26: %%5.0u ===\n");
	j = ft_printf("|%5.0u|\n", i);
	k = printf("|%5.0u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 4000000000;
	printf("===TEST 27: %%u ===\n");
	j = ft_printf("|%u|\n", i);
	k = printf("|%u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 123;
	printf("===TEST 28: %%5.6u ===\n");
	j = ft_printf("|%5.6u|\n", i);
	k = printf("|%5.6u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===TEST 29: %%.0u ===\n");
	j = ft_printf("|%.0u|\n", i);
	k = printf("|%.0u|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 42;
	j = 100;
	k = 3;
	printf("===TEST 30:|%%5u|%%08u|%%.3u|===\n");
	ft_printf("|%5u|%08u|%.3u|\n", i, j, k);
	printf("|%5u|%08u|%.3u|\n", i, j, k);
	

	return (0);
}
