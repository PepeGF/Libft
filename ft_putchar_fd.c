/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:59:30 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/26 20:03:39 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
// en lugar de 1 poner sizeof(char)??'
