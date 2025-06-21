/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:39:16 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/12 23:59:01 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int	main(void)
{
	unsigned int		i;
	int		j;
	int		k;

	i = 42;
	printf("===TEST 1: %%-8X===\n");
	j = ft_printf("|%-8X|\n", i);
	k = printf("|%-8X|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 42;
	printf("===TEST 2: %%08X===\n");
	j = ft_printf("|%08X|\n", i);
	k = printf("|%08X|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 42;
	printf("===TEST 3: %%#x===\n");
	j = ft_printf("|%#x|\n", i);
	k = printf("|%#x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===TEST 4: %%#x===\n");
	j = ft_printf("|%#x|\n", i);
	k = printf("|%#x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);
	
	i = 42;
	printf("===test 5: %%#08X===\n");
	j = ft_printf("|%#08X|\n", i);
	k = printf("|%#08X|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 42;
	printf("===test 6: %%#-8x===\n");
	j = ft_printf("|%#-8x|\n", i);
	k = printf("|%#-8x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 42;
	printf("===test 7: %%.5x===\n");
	j = ft_printf("|%.5x|\n", i);
	k = printf("|%.5x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 42;
	printf("===test 8: %%#10.5x===\n");
	j = ft_printf("|%#10.5x|\n", i);
	k = printf("|%#10.5x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===test 9: %%#.0x===\n");
	j = ft_printf("|%#.0x|\n", i);
	k = printf("|%#.0x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 42;
	printf("===test 10: %%#08.5x===\n");
	j = ft_printf("|%#08.5x|\n", i);
	k = printf("|%#08.5x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===test 11: %%#10.0x===\n");
	j = ft_printf("|%#10.0x|\n", i);
	k = printf("|%#10.0x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0xffffffff;
	printf("===test 12: %%#X===\n");
	j = ft_printf("|%#X|\n", i);
	k = printf("|%#X|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===test 13: %%.0x===\n");
	j = ft_printf("|%.0x|\n", i);
	k = printf("|%.0x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);
		
	printf("===test 14: %%.x===\n");
	j = ft_printf("|%.x|\n", i);
	k = printf("|%.x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===test 15: %%#x===\n");
	j = ft_printf("|%#x|\n", i);
	k = printf("|%#x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===test 16: %%#.0x===\n");
	j = ft_printf("|%#.0x|\n", i);
	k = printf("|%#.0x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===test 17: %%#8.0x===\n");
	j = ft_printf("|%#8.0x|\n", i);
	k = printf("|%#8.0x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===test 18: %%#08x ===\n");
	j = ft_printf("|%#08x|\n", i);
	k = printf("|%#08x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===test 19: %%08x ===\n");
	j = ft_printf("|%08x|\n", i);
	k = printf("|%08x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===test 20: %%8.0x ===\n");
	j = ft_printf("|%8.0x|\n", i);
	k = printf("|%8.0x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===test 21: %%-8.0x ===\n");
	j = ft_printf("|%-8.0x|\n", i);
	k = printf("|%-8.0x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===test 22: %%#-8.0x ===\n");
	j = ft_printf("|%#-8.0x|\n", i);
	k = printf("|%#-8.0x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===test 23: %%#08.5x ===\n");
	j = ft_printf("|%#08.5x|\n", i);
	k = printf("|%#08.5x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===test 24: %%#.x ===\n");
	j = ft_printf("|%#.x|\n", i);
	k = printf("|%#.x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===test 25: %%.5x ===\n");
	j = ft_printf("|%.5x|\n", i);
	k = printf("|%.5x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===test 25: %%5x ===\n");
	j = ft_printf("|%5x|\n", i);
	k = printf("|%5x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===test 26: %%-5x ===\n");
	j = ft_printf("|%-5x|\n", i);
	k = printf("|%-5x|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);


	// 明确测试 %X 的 0 值 + 精度为 0 的情况
	ft_printf("test: %%#.0X |%#.0X|\n", 0); // → 应该是空
	printf("test: %%#.0X |%#.0X|\n", 0); // → 应该是空

	// 宽度 + 精度 + # 同时出现，值为 0
	ft_printf("test: %%#10.0X |%#10.0X|\n", 0); // → 应该是10个空格
	printf("test: %%#10.0X |%#10.0X|\n", 0);
	
	// 只有 %x，没有任何 flag，值为 0
	ft_printf("test: %%x |%x|\n", 0); // → 应该是 "0"
	printf("test: %%x |%x|\n", 0);
	
	// %x 精度大于宽度，值为 0
	ft_printf("test: %%5.8x |%5.8x|\n", 0); // → 输出 00000000，宽度已被精度“吃掉”
	printf("test: %%5.8x |%5.8x|\n", 0); 
	
	// %x 精度等于宽度，值为 0
	ft_printf("test: %%5.5x |%5.5x|\n", 0); // → 输出 00000
	printf("test: %%5.5x |%5.5x|\n", 0); 

	// 多个 flags 混合 + 值为 0
	ft_printf("test: %%#-08.5x |%#-08.5x|\n", 0); // → flag 顺序不影响效果
	printf("test: %%#-08.5x |%#-08.5x|\n", 0);

	// 宽度 = 精度 = 0
	ft_printf("test: %%0.0x |%.0x|\n", 0);  // 输出应为空
	printf("test: %%0.0x |%.0x|\n", 0);  // 输出应为空

	ft_printf("test: %%5.0x with width |%5.0x|\n", 0);  // 输出5个空格
	printf("test: %%5.0x with width |%5.0x|\n", 0);  

	// #+精度+0值，验证是否完全 suppress
	ft_printf("test: %%#0.0x |%#.0x|\n", 0);  // 应为空
	printf("test: %%#0.0x |%#.0x|\n", 0);

	ft_printf("test: %%#5.0x |%#5.0x|\n", 0); // 应为5个空格
	printf("test: %%#5.0x |%#5.0x|\n", 0); 
	return (0);
}
