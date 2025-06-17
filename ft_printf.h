/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <yanzhao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:08:11 by yanzhao           #+#    #+#             */
/*   Updated: 2025/06/17 18:55:06 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

typedef struct s_flag
{
	int		left_align;
	int		zero_pad;
	int		alt_form;
	int		positive;
	int		space;
	int		width;
	int		prec;
	char	spec;
}	t_format_spec;

typedef struct s_variables
{
	int				i;
	int				percent;
	unsigned int	u;
	char			*s;
	void			*p;
}	t_variables;

//ft_print_signed_int.c
int		ft_print_signed_int(char *str,
			t_format_spec *flag, t_variables *variables);

//ft_print_unsigned_int.c
int		ft_print_unsigned_int(char *str,
			t_format_spec *flag, t_variables *variables);
//ft_print_str_s.c
int		ft_print_str_s(char *str, t_format_spec *flag);

//ft_print_adress.c
int		ft_print_adress(char *str,
			t_format_spec *flag, t_variables *variables);

//ft_print_c.c
int		ft_print_c(char c, t_format_spec *flag);

//ft_print_utils.c
int		cal_nbr_zero(int width, int prec, int len_str, int zero_pad);
int		cal_nbr_space(int width, int prec, int len_str, int zero_pad);
void	adjust_space_zero(int *num_space, int *num_zero,
			t_format_spec *flag, t_variables *variables);
int		ft_print_str_nbr(char *str, t_format_spec *flag, int len_print);
int		ft_print_space(int num_space, t_format_spec *flag);

//ft_print_utils2.c
int		ft_print_char(char c, int count);
int		ft_strlen(char *str);
char	*ft_strdup(char *str);

//ft_convert_signed_int_str.c
char	*ft_itoa(int nbr);

//ft_convert_unsigned_int_str.c
char	*ft_utoa(unsigned int nbr);
char	*ft_xtoa(unsigned int nbr, char flag_spec);

//ft_convert_uintptr_t_str.c
char	*ft_ptoa(uintptr_t nbr);

//ft_printf.c
char	*get_str_spec_x_u_p(t_format_spec *flag, t_variables *variables);
int		printf_helper(t_format_spec *flag, t_variables *variables);
int		printf_helper2(t_format_spec *flag, t_variables *variables);
int		iterative_format_string(const char *str, va_list *args,
			t_format_spec *flag, t_variables *variables);
int		ft_printf(const char *str, ...);

//ft_check_flag.c
void	reset_flag_common(t_format_spec *flag);
void	reset_flag_by_specifier(t_format_spec *flag, t_variables *variables);
int		is_specifier(char c);
int		check_format_spec(char *str, va_list *args,
			t_format_spec *flag, t_variables *variables);

//ft_check_flag_utils.c
char	*init_format_spec(char *str, t_format_spec *flag);
char	*get_width(char *str, t_format_spec *flag);
char	*get_precision(char *str, t_format_spec *flag);
void	*ft_memset(void *s, int c, size_t n);
void	init_flag(t_format_spec *flag);

#endif
