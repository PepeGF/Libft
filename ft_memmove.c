/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:41:15 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/22 14:20:48 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*auxdst;
	char	*auxsrc;

	i = 0;
	auxdst = (char *)dst;
	auxsrc = (char *)src;
	if (!dst && !src)
		return (dst);
	while (i < len)
	{
		auxdst[i] = auxsrc[i];
		i++;
	}
	return (dst);
}
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*auxdst;
	char	*auxsrc;
	int		solape;

	solape = 0;
	i = 0;
	auxdst = (char *)dst;
	auxsrc = (char *)src;
	if (!dst && !src)
		return (dst);
	while (i < len)
	{
		if (auxdst = auxsrc + i)
			solape++;
		i++;
	}
	i = 0;
	while (i < len)
	{
		auxdst[len - 1 + i] = temp[i];
		i++;
	}

	return (dst);
}
