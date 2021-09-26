/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:24:04 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/26 17:46:28 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(int n);
static char	*ft_fill_str_positive(char *str, int n, int digits);
static char	*ft_fill_str_negative(char *str, int n, int digits);

char	*ft_itoa(int n)
{
	int		sign;
	int		digits;
	char	*str;

	sign = 1;
	digits = ft_num_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		sign = -1;
		str = (char *)malloc(sizeof(char) * (digits + 2));
	}
	else
		str = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str)
		return (0);
	if (sign == 1)
		str = ft_fill_str_positive(str, n, digits);
	else
		str = ft_fill_str_negative(str, n, digits);
	return (str);
}

static char	*ft_fill_str_positive(char *str, int n, int digits)
{
	str[digits] = '\0';
	while (digits)
	{
		str[digits - 1] = n % 10 + '0';
		n /= 10;
		digits--;
	}
	return (str);
}

static char	*ft_fill_str_negative(char *str, int n, int digits)
{
	str[digits + 1] = '\0';
	str[0] = '-';
	n *= -1;
	while (digits)
	{
		str[digits] = n % 10 + '0';
		n /= 10;
		digits--;
	}
	return (str);
}

static int	ft_num_len(int n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}
