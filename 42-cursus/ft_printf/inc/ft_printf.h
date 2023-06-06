/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:28:22 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/06/05 16:03:00 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*---------------------------  Librerias  ------------------------------------*/
# include "../libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/*---------------------------  Macros  ---------------------------------------*/
# define PRINTF_FLAG "0+-# hl"

/*---------------------------  Estructuras  ----------------------------------*/
typedef struct s_flags
{
	int		len_h;
	int		len_hh;
	int		len_l;
	int		len_ll;

}			t_flags;

typedef struct s_block
{
	int		ret;
	int		i;
	char	type;
	char	*s;
	va_list	ap;
	t_flags	flags;

}			t_block;

/*---------------------------  Funciones  ------------------------------------*/
int			ft_printf(const char *str, ...);
void		reset_block(t_block *b);
// Funciones de chequeo
void		ft_check_flags(const char *str, t_block *b);
void		ft_check_types(const char *str, t_block *b);
// Funciones para convertir
void		ft_converter_cs(char type, t_block *b);
void		ft_converter_id(t_block *b);
void		ft_converter_u(t_block *b);
void		ft_converter_x(char type, t_block *b);
void		ft_converter_o(t_block *b);
void		ft_converter_p(t_block *b);
// Funciones para imprimir
void		print_char(char c, t_block *b);
void		print_str(t_block *b);
void		print_null(t_block *b);
void		print_dig(t_block *b);

#endif
