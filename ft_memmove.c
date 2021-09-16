/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:55:49 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/15 20:52:19 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	(void)dst;
	(void)src;
	(void)len;
	/*
	char	*aux;
	int		i;

	i = 0;
	while (src[i])
	{
		aux[i] = (char *)src[i];
		i++;
	}
	i = 0;
	while (aux[i])
	{
		(char *) dst[i] = aux[i];
		i++;
	}*/
	return (dst);
	
}

//añado un auxiliar xq se supone que la copia no es destructiva
//aunque dst y src se solapen en algún momento.

