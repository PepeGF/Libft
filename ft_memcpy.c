/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:23:56 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/24 19:15:32 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*auxdst;
	unsigned char	*auxsrc;

	if (!dst && !src)
		return (dst);
	i = 0;
	auxdst = (unsigned char *)dst;
	auxsrc = (unsigned char *)src;
	while (i < n)
	{
		auxdst[i] = auxsrc[i];
		i++;
	}
	return (dst);
}
