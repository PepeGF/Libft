/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:21:29 by josgarci          #+#    #+#             */
/*   Updated: 2021/10/02 12:31:51 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflows(unsigned long long n, int neg)
{
	if (neg == -1 && n > 9223372036854775807)
		return (0);
	if (neg == 1 && n > 9223372036854775807)
		return (-1);
	return (n);
}

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	n;
	int					neg;

	i = 0;
	neg = 1;
	n = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\v' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	n = check_overflows(n, neg);
	return (n * neg);
}
