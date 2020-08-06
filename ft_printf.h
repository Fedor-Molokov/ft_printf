/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarsell <dmarsell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 10:34:52 by dmarsell          #+#    #+#             */
/*   Updated: 2020/08/06 11:11:31 by dmarsell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define FD 1

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# include <stdarg.h>

typedef struct	s_flags
{
	int			size;
	int			varsize;
	int			div;
	int			minus;
	int			plus;
	int			space;
	int			zero;
	int			hash;
	int			weidth;
	int			precision;
	int			dot;
	int			star;
	int			print;
	int			percent;
	int			decminus;
	char		*ox;
	char		*len;
	char		type;
}				t_flags;

typedef struct	s_use
{
	int			res;
	int			len;
	char		plus;
	char		space;
	char		decminus;
}				t_use;

typedef struct	s_print_d
{
	int			weidth;
	int			precision;
	int			len;
}				t_print_d;

typedef struct	s_count_d
{
	int			start;
	int			space;
}				t_count_d;

union			u_longint_double
{
	long		long_val;
	long double	idouble_val;
};

void			to_weidth_decimal_n_n(char *ap, int precision, int *len, t_flags *f);
void			ft_space_bit_next(char *tmp, char *buff, int *res, t_count_d *count);
void			to_weidth_decimal_min(char *ap, int precision, int *len, t_flags *f);
void			print_space_decimal(char *ap, int *precision, int len, t_flags *f);
void			print_space_decimal(char *ap, int *precision, int len, t_flags *f);
char			*ft_str_connection(char *entire, char *bufer, char *sign, int p);
int				to_weidth_decimal(char *ap, int precision, int *len, t_flags *f);
void			ft_count_num_ull(unsigned long long n, char *buff, int *res);
void			print_str_decimal_next(char *ap, int *len, t_flags *f, int i);
int				out_num(const char *format, int size1, int size, int start);
void			ft_count_bit(unsigned long long n, char *buff, int *res);
void			to_weidth_decimal_next_n_n(char *ap, int *len, t_flags *f);
int				calc_float(t_flags *f, va_list ap, char *buff, char *str);
void			ft_space_bit(char *tmp, char *buff, int *res, t_flags *f);
void			ft_count_num_ul(unsigned long n, char *buff, int *res);
void			ft_count_num_ui(unsigned int n, char *buff, int *res);
int				to_weidth_decimal_next(char *ap, int *len, t_flags *f);
void			l_less_next_n(char *s, t_flags *f, int l, t_count_d *rx);
void			l_less_next(char *s, t_flags *f, int l, t_count_d *rx);
void			ft_count_num_ll(long long n, char *buff, int *res);
void			print_zero_decimal_next(char *ap, t_flags *f, int i);
void			print_zero_decimal(char *ap, int *len, t_flags *f);
void			fill_type(const char *ft, t_flags *tmp, int start);
void			print_zero_decimal(char *ap, int *len, t_flags *f);
void			find_weidth(const char *ft, t_flags *f, int start);
int				count_decimal(t_flags *f, va_list ap, char *buff);
void			fill_flag(const char *fmt, t_flags *f, int start);
void			print_str_decimal(char *ap, int *len, t_flags *f);
int				ft_div_base(unsigned long long value, int base);
int				all_formats(const char *ft, int i, va_list ap);
void			to_null(t_flags *f, const char *ft, int start);
void			ft_count_num_l(long n, char *buff, int *res);
void			ft_count_num_l(long n, char *buff, int *res);
void			print_hex(long nb, int *pointlen, t_flags *f);
void			ft_count_num_i(int n, char *buff, int *res);
int				l_big_next(char *s, t_flags *f, int l, int x);
void			fill_len(const char *ft, t_flags *tm, int c);
int				convert_to_l(unsigned long src, t_flags *f);
int				how_much_l(unsigned long tmp, t_flags *f);
int				print_char_decimal(t_flags *f, char *ap);
void			ft_putnstr(char *str, int n, int end);
int				to_weidth(char *ap, int c, t_flags *f);
int				how_much(unsigned int tmp, t_flags *f);
int				print_address(t_flags *f, va_list ap);
void			ft_to_str(char (*bufer)[70], int n);
int				ft_printf(const char *format, ...);
int				ft_circ(char (*bufer)[70], int p);
int				print_num_str(char *s, t_flags *f);
int				l_less(char *s, t_flags *f, int l);
void			put_zero(int s, int p, t_flags *f);
int				print_float(t_flags *f, char *ap);
int				find_le(const char *ft, int st);
int				l_big(char *s, t_flags *f, int l);
int				ft_printf(const char *ft, ...);
int				print_ch(t_flags *f, va_list ap);
void			print_space(int len, t_flags *f);
int				convert(va_list ap, t_flags *f);
void			if_hash(char **dst, t_flags *f);
void			print_space(int c, t_flags *f);
void			print_zero(int c, t_flags *f);
void			print_space_float(t_use *box);
void			print_str(char *ap, int l);
void			put_space(int l, t_flags *f);
char			do_16_abc(int t, t_flags *f);
void			ft_decminus(t_use *box);
void			only_zero(char *s);

#endif
