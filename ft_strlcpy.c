/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 09:44:09 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/21 10:38:35 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	while (src[i] && i < (size -1) && size != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	printf("%s\n", dst);	//quitar esta linea
	return (srclen);
}
/*
int	main()
{
	char	desti[] = "Aupa Atleti campeon";
	char	orig[] = "Tu eres la alegria de mi corazon";
	int		tamano = 15;
	int		r;

	r = ft_strlcpy(desti, orig, tamano);
	printf("destino: %s\n",desti);
	printf("%i\n", r);

}
*/
