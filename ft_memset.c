/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:08:13 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/23 21:27:09 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*aux;

	c = (unsigned char) c;
	aux = (char *)b;
	i = 0;
	while (i < len)
	{
		aux[i] = c;
		i++;
	}
	return (b);
}
