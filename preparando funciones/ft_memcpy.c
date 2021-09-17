/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:43:22 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/14 14:55:31 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 1;
	while (i <= n)
	{
		(char *)dst[i] = (char *)src[i];
		i++;
	}
	return (dst);
}

// NI NORM
// NI TEST
// CODIGO TIRADO X TIRAR
