/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:39:16 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/12 23:58:45 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

/*void print_flag_variables(t_format_spec *flag, t_variables *variables)
{
    const char *RED = "\033[31m";
    const char *BLUE = "\033[34m";
    const char *RESET = "\033[0m";

    // flag 部分用红色
    printf("%sflag->left_align = %d%s\n", RED, flag->left_align, RESET);
    printf("%sflag->zero_pad = %d%s\n", RED, flag->zero_pad, RESET);
    printf("%sflag->alt_form = %d%s\n", RED, flag->alt_form, RESET);
    printf("%sflag->positive = %d%s\n", RED, flag->positive, RESET);
    printf("%sflag->space = %d%s\n", RED, flag->space, RESET);
    printf("%sflag->width = %d%s\n", RED, flag->width, RESET);
    printf("%sflag->prec = %d%s\n", RED, flag->prec, RESET);
    printf("%sflag->spec = %c%s\n", RED, flag->spec, RESET);

    // variables 部分用蓝色
    printf("%svariables->i = %d%s\n", BLUE, variables->i, RESET);
    printf("%svariables->u = %u%s\n", BLUE, variables->u, RESET);
    printf("%svariables->s = %s%s\n", BLUE, variables->s ? variables->s : "(null)", RESET);
    printf("%svariables->p = %p%s\n", BLUE, variables->p, RESET);
}*/

#include <stdio.h>

int	main(void)
{
	int		i;
	int		j;
	int		k;

	i = 42;
	printf("===TEST 1: %%d===\n");
	j = ft_printf("|%d|\n", i);
	k = printf("|%d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 2: %%5d===\n");
	j = ft_printf("|%5d|\n", i);
	k = printf("|%5d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 3: %%-5d===\n");
	j = ft_printf("|%-5d|\n", i);
	k = printf("|%-5d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 4: %%05d===\n");
	j = ft_printf("|%05d|\n", i);
	k = printf("|%05d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 5: %%+5d===\n");
	j = ft_printf("|%+5d|\n", i);
	k = printf("|%+5d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 6: %% d===\n");
	j = ft_printf("|% d|\n", i);
	k = printf("|% d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 7: %%+d===\n");
	j = ft_printf("|%+d|\n", i);
	k = printf("|%+d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 8: %%-+5d===\n");
	j = ft_printf("|%-+5d|\n", i);
	k = printf("|%-+5d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 9: %%0+5d===\n");
	j = ft_printf("|%0+5d|\n", i);
	k = printf("|%0+5d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 10: %%5.3i===\n");
	j = ft_printf("|%5.3i|\n", i);
	k = printf("|%5.3i|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===TEST 11: %%5.0d i = 0 ===\n");
	j = ft_printf("|%5.0d|\n", i);
	k = printf("|%5.0d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 12: %%+5.0d i = 0===\n");
	j = ft_printf("|%+5.0d|\n", i);
	k = printf("|%+5.0d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 42;
	printf("===TEST 13: %%0.5d, input 42===\n");	
	j = ft_printf("|%0.5d|\n", i);
	k = printf("|%0.5d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 14: %%-5.3d===\n");
	j = ft_printf("|%-5.3d|\n", i);
	k = printf("|%-5.3d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 15: %% 05d ===\n");
	j = ft_printf("|% 05d|\n", i);
	k = printf("|% 05d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 16: %%+05d ===\n");
	j = ft_printf("|%+05d|\n", i);
	k = printf("|%+05d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 17: %%10.5d ===\n");
	j = ft_printf("|%10.5d|\n", i);
	k = printf("|%10.5d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 18: %%010.5d ===\n");
	j = ft_printf("|%010.5d|\n", i);
	k = printf("|%010.5d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 19: %%0d ===\n");
	j = ft_printf("|%0d|\n", i);
	k = printf("|%0d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);
	
	printf("===TEST 20: %%.5d ===\n");
	j = ft_printf("|%.5d|\n", i);
	k = printf("|%.5d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 21: %%+10.5d ===\n");
	j = ft_printf("|%+10.5d|\n", i);
	k = printf("|%+10.5d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);
	
	i = -42;
	printf("===TEST 22: %%+10.5d input i = -42 ===\n");
	j = ft_printf("|%+10.5d|\n", i);
	k = printf("|%+10.5d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===TEST 23: %%.d input i = 0 ===\n");
	j = ft_printf("|%+.d|\n", i);
	k = printf("|%+.d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 24: %%.0d input i = 0 ===\n");
	j = ft_printf("|%.0d|\n", i);
	k = printf("|%.0d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = -42;
	printf("===TEST 25: %%+d input i = -42 ===\n");
	j = ft_printf("|%+d|\n", i);
	k = printf("|%+d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);
	
	printf("===TEST 26: %%+d input i = -42 ===\n");
	j = ft_printf("|% d|\n", i);
	k = printf("|% d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 27: %%0d input i = -42 ===\n");
	j = ft_printf("|%0d|\n", i);
	k = printf("|%0d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===TEST 28: %%0.0d input i = 0 ===\n");
	j = ft_printf("|%0.0d|\n", i);
	k = printf("|%0.0d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 29: %%10.d input i = 0 ===\n");
	j = ft_printf("|%10.d|\n", i);
	k = printf("|%10.d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);
	
	printf("===TEST 30: %%+010d input i = 0 ===\n");
	j = ft_printf("|%+010d|\n", i);
	k = printf("|%+010d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);
	
	printf("===TEST 31: %%+10.0d input i = 0 ===\n");
	j = ft_printf("|%+10.0d|\n", i);
	k = printf("|%+10.0d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 32: %%+.d input i = 0 ===\n");
	j = ft_printf("|%+.d|\n", i);
	k = printf("|%+.d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 12345;
	printf("===TEST 33: %%10.3d input i = 123456 ===\n");
	j = ft_printf("|%10.3d|\n", i);
	k = printf("|%10.3d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 1;
	printf("===TEST 34: %%+03d input i = 1 ===\n");
	j = ft_printf("|%+03d|\n", i);
	k = printf("|%+03d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);
	
	printf("===TEST 35: %%03.2d input i = 1 ===\n");
	j = ft_printf("|%03.2d|\n", i);
	k = printf("|%03.2d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 42;
	printf("===TEST 36: %%0-5d input i = 42 ===\n");
	j = ft_printf("|%0-5d|\n", i);
	k = printf("|%0-5d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	printf("===TEST 37: %%0+5.3d input i = 42 ===\n");
	j = ft_printf("|%0+5.3d|\n", i);
	k = printf("|%0+5.3d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 1;
	printf("===TEST 38: %%+5.1d input i = 1 ===\n");
	j = ft_printf("|%+5.1d|\n", i);
	k = printf("|%+5.1d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 12345;
	printf("===TEST 39: %%+5.1d input i = 12345 ===\n");
	j = ft_printf("|%+5.1d|\n", i);
	k = printf("|%+5.1d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = 0;
	printf("===TEST 40: %%d input i = 0 ===\n");
	j = ft_printf("|%d|\n", i);
	k = printf("|%d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = -42;
	printf("===TEST 41: %%+0.0d input i = 0 ===\n");
	j = ft_printf("|%+0.0d|\n", i);
	k = printf("|%+0.0d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	i = -42;
	printf("===TEST 42: %% 0.0d input i = 0 ===\n");
	j = ft_printf("|% 0.0d|\n", i);
	k = printf("|% 0.0d|\n", i);
	printf("j = %d\n", j);
	printf("k = %d\n", k);

	return (0);
}
