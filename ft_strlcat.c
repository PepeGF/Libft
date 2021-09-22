/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:42:39 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/22 22:12:16 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>//solo para linux
// compilar con -lbsd
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendst;
	size_t	lensrc;
	
	i = ft_strlen(dst);
	j = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size < lendst + lensrc)
		return (size + lensrc);
	while (src[j] && i <= size )
	{
		dst[i] = src[j];
		i++;
		j++;
		if (j == lensrc-1 )
			j = 0;
	}
//	printf("i --> %li\n", i);
	dst[i] = '\0';
	return (lendst + lensrc);
}

int main ()
{
	char dst[] = "Esta funcion es una autentica y tremendisima ";
	char src[] = "puta mierda";

	int size = 70;
//	int largo;
	printf("size: %i\n",size); 
	printf("len dst = %li\n", strlen(dst));
	printf("len src = %li\n", strlen(src));
	printf("Orig: %li\n", strlcat(dst, src, size));
	strlcat(dst, src, size);
	printf("dst -> %s\n", dst);
	printf("src -> %s\n", src);
	printf("----------------------------------------\n");
}

/*
int main ()
{
	char dst[] = "Esta funcion es una autentica y tremendisima ";//45
	char src[] = "puta mierda";//11

	int size = 58;

	printf("size: %i\n",size); 
	printf("len dst = %li\n", ft_strlen(dst));
	printf("len src = %li\n", ft_strlen(src));
	printf("Orig: %li\n", strlcat(dst, src, size));
	strlcat(dst, src, size);
	printf("dst -> %s\n", dst);
	printf("src -> %s\n", src);
	printf("----------------------------------------\n");

	size = 64;

	printf("size: %i\n",size); 
	printf("len dst = %li\n", ft_strlen(dst));
	printf("len src = %li\n", ft_strlen(src));
	printf("Orig: %li\n", strlcat(dst, src, size));
	strlcat(dst, src, size);
	printf("dst -> %s\n", dst);
	printf("src -> %s\n", src);
	printf("----------------------------------------\n");

	size = 65;

	printf("size: %i\n",size); 
	printf("len dst = %li\n", ft_strlen(dst));
	printf("len src = %li\n", ft_strlen(src));
	printf("Orig: %li\n", strlcat(dst, src, size));
	strlcat(dst, src, size);
	printf("dst -> %s\n", dst);
	printf("src -> %s\n", src);
	printf("----------------------------------------\n");

	size = 66;

	printf("size: %i\n",size); 
	printf("len dst = %li\n", ft_strlen(dst));
	printf("len src = %li\n", ft_strlen(src));
	printf("Orig: %li\n", strlcat(dst, src, size));
	strlcat(dst, src, size);
	printf("dst -> %s\n", dst);
	printf("src -> %s\n", src);
	printf("----------------------------------------\n");

	size = 67;

	printf("size: %i\n",size); 
	printf("len dst = %li\n", ft_strlen(dst));
	printf("len src = %li\n", ft_strlen(src));
	printf("Orig: %li\n", strlcat(dst, src, size));
	strlcat(dst, src, size);
	printf("dst -> %s\n", dst);
	printf("src -> %s\n", src);
	printf("----------------------------------------\n");

	size = 68;

	printf("size: %i\n",size); 
	printf("len dst = %li\n", ft_strlen(dst));
	printf("len src = %li\n", ft_strlen(src));
	printf("Orig: %li\n", strlcat(dst, src, size));
	strlcat(dst, src, size);
	printf("dst -> %s\n", dst);
	printf("src -> %s\n", src);
	printf("----------------------------------------\n");


	return (0);
}
//*/
