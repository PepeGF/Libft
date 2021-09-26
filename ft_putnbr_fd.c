/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 20:17:55 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/26 20:37:40 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int num;

	num = n;
	if (num < 0)
	{
		num *= -1
		write (fd, '-', 1);
	}
	if (num / 10 > 0)
		ft_putnbr_fd (num / 10, fd);
	else
		ft_putnbr_fd (num % 10);
}
