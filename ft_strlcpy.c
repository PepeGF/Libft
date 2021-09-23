/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 09:44:09 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/22 10:05:52 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize  == 0)
		return (srclen);
	while (src[i] && i < (dstsize - 1) && dstsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
/*
int	main()
{
	char	desti[] = "Aupa Atleti campeon";
	char	orig[] = "Tu eres la alegria de mi corazon";
	int		tamano = 0;
	int		r;

	r = ft_strlcpy(desti, orig, tamano);
	printf("destino: %s\n",desti);
	printf("%i\n", r);
	printf("-------------------\n");
	r = strlcpy(desti, orig, tamano);
	printf("%i\n", r);

}
*/
