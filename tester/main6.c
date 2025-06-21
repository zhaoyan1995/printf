/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:25:18 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/12 23:59:27 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int	main(void)
{
	char	c;
	int		i;
	int		j;

	c = 'Q';
	printf("=== test 1 %% c===\n");
	i = ft_printf("|% c|\n", c);
	j = printf("|% c|\n", c);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== test 2 [%%c]===\n");
	i = ft_printf("[%c]\n", c);
	j = printf("[%c]\n", c);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== test 3 %%5c===\n");
	i = ft_printf("|%5c|\n", c);
	j = printf("|%5c|\n", c);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== test 4 %%-5c===\n");
	i = ft_printf("|%-5c|\n", c);
	j = printf("|%-5c|\n", c);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== test 5 %%2c ===\n");
	i = ft_printf("|%2c|\n", c);
	j = printf("|%2c|\n", c);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== test 6 %%c%%c%%c ===\n");
	i = ft_printf("|%c%c%c|\n", c, c, c);
	j = printf("|%c%c%c|\n", c, c, c);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== test 7 %%c %%c %%c ===\n");
	i = ft_printf("|%c %c %c|\n", c, c, c);
	j = printf("|%c %c %c|\n", c, c, c);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== test 8 |%%c||%%c| ===\n");
	i = ft_printf("|%c||%c|\n", c, c);
	j = printf("|%c||%c|\n", c, c);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== test 9 |%%c||%%5c| ===\n");
	i = ft_printf("|%c||%5c|\n", c, c);
	j = printf("|%c||%5c|\n", c, c);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== test 10 Start%%cEnd ===\n");
	i = ft_printf("Start%cEnd\n", c);
	j =printf("Start%cEnd\n", c);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== test 11 %%c ===\n");
	i = ft_printf("%c\n", c);
	j = printf("%c\n", c);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== test 12 %%%%c = %%c ===\n");
	i = ft_printf("%%c = %c\n", c);
	j = printf("%%c = %c\n", c);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== test 13 printf(0) ===\n");
	i = ft_printf(0);
	j = printf(0);
	printf("i = %d\n", i);
	printf("j = %d\n", j);


	return (0);
}
