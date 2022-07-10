/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarvalh <tcarvalh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:11:59 by tcarvalh          #+#    #+#             */
/*   Updated: 2022/07/10 19:21:34 by tcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int	ft_printf(const char *str, ...);
int	ft_printnbr(int n);
int	ft_printstr(char *str);
int	ft_printuint(unsigned int num);
int	ft_printhex(unsigned long long num, int lower);
int	ft_printpointer(unsigned long long ptr);

#endif
