/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:25:18 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/12 23:59:19 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int	main(void)
{
	char	*str;
	int	i;
	int	j;

	str = "hello";

	printf("=== test 1 %%p===\n");
	i = ft_printf("|%p|\n", str);
	j = printf("|%p|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== test 2 %%20p===\n");
	i = ft_printf("|%20p|\n", str);
	j = printf("|%20p|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);


	printf("=== test 3 %%-20p===\n");
	i = ft_printf("|%-20p|\n", str);
	j = printf("|%-20p|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);


	printf("=== test 4 %%020p===\n");
	i = ft_printf("|%020p|\n", str);
	j = printf("|%020p|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);


	str = NULL;
	printf("=== test 5 %%p str = NULL ===\n");
	i = ft_printf("|%p|\n", str);
	j = printf("|%p|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);


	printf("=== test 6 %%10p str = NULL ===\n");
	i = ft_printf("|%10p|\n", str);
	j = printf("|%10p|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);


	printf("=== test 7 %%-10p str = NULL ===\n");
	i = ft_printf("|%-10p|\n", str);
	j = printf("|%-10p|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);


	str = "hello";
	printf("=== test 8 %%p %%p str = NULL ===\n");
	i = ft_printf("|%p %p|\n", str, str);
	j = printf("|%p %p|\n", str, str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	printf("=== test 9 %%#p str = NULL ===\n");
	i = ft_printf("|%#p|\n", str);
	j = printf("|%#p|\n", str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);


	printf("=== test 10 %%p\\n%%20p str = NULL ===\n");
	i = ft_printf("|%p|\n|%20p|\n", str, str);
	j = printf("|%p|\n|%20p|\n", str, str);
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	return (0);
}
