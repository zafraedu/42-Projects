/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 01:46:28 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/12 15:20:35 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*═════════════════════════════ [ LIBS ] ═════════════════════════════════════*/
# include "./libft.h"
# include <stdarg.h>

/*══════════════════════════ [  STRUCTS ] ════════════════════════════════════*/

typedef struct s_flags
{
	int	spec;
	int	width;
	int	left;
	int	zero;
	int	star;
	int	precision;
	int	hash;
	int	space;
	int	plus;
}		t_flags;

/*═════════════════════════ [  FUNCTIONS ] ═══════════════════════════════════*/

t_flags	ft_flags_init(void);
t_flags	ft_flag_left(t_flags flags);
t_flags	ft_flag_digit(char c, t_flags flags);
t_flags	ft_flag_width(va_list args, t_flags flags);
int		ft_flag_precision(const char *s, int ps, va_list arg, t_flags *flag);
int		ft_printf(const char *format, ...);
int		ft_print_arg(char type, va_list args, t_flags flags);
int		ft_print_char(char c, t_flags flags);
int		ft_print_c(char c);
int		ft_print_str(const char *str, t_flags flags);
int		ft_print_s(const char *str);
int		ft_print_s_pre(const char *str, int precision);
int		ft_print_sign_pre(int n, t_flags *flags);
int		ft_print_int(int n, t_flags flags);
int		ft_print_integer(char *nbstr, int n, t_flags flags);
int		ft_print_i(char *nbstr, int n, t_flags flags);
int		ft_print_unsigned(unsigned int n, t_flags flags);
int		ft_print_u(char *nbstr, t_flags flags);
int		ft_print_unint(char *nbstr, t_flags flags);
int		ft_print_hex(unsigned int n, int is_upper, t_flags flags);
int		ft_print_x(char *nbstr, int n, int is_upper, t_flags flags);
int		ft_print_hexadec(char *nbstr, int n, int is_upper, t_flags flags);
int		ft_print_ptr(unsigned long int n, t_flags flags);
int		ft_print_p(unsigned long int n);
void	ft_print_adr(unsigned long int n);
char	*ft_printf_itoa(long nb);
char	*ft_printf_utoa(unsigned int nb);
char	*ft_printf_xtoa(unsigned long int nb, int is_upper);
int		ft_unint_len(unsigned int n);
int		ft_hex_len(unsigned int n);
int		ft_ptr_len(unsigned long int n);
int		ft_istype(int c);
int		ft_isspec(int c);
int		ft_isflag(int c);
int		ft_pad_width(int total_width, int size, int zero);

#endif
