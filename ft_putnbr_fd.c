/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 20:17:55 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/27 19:41:59 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		num = n * -1;
	}
	else
		num = (unsigned int)n;
	if (num < 10)
	{
		ft_putchar_fd (num % 10 + 48, fd);
		return ;
	}
	else
	{
		ft_putnbr_fd (num / 10, fd);
		ft_putchar_fd (num % 10 + 48, fd);
	}
}
