/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarvalh <tcarvalh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:45:09 by tcarvalh          #+#    #+#             */
/*   Updated: 2022/07/10 17:17:50 by tcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_lenuint(unsigned int num)
{
	size_t	len;

	len = 1;
	while (num / 10 != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

static char	*ft_uitoa(unsigned int num)
{
	char	*str;
	size_t	len;

	len = ft_lenuint(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (num != 0)
	{
		str[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (str);
}

int	ft_printuint(unsigned int num)
{
	size_t	len;
	char	*str;

	str = ft_uitoa(num);
	len = ft_printstr(str);
	free(str);
	return (len);
}
