/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:41:15 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/23 12:35:26 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///*
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
//		printf("\ni--> %lu\n",i);
			while ((int)i >= 0 /*&& i < (int)len*/)
			{
//				printf("i -> %lu\tlen -> %lu\n",i,len);
				((char *)dst)[i] = ((char *)src)[i];
				i--;
			}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*/
int main ()
{
	char dst[] = "Esta funcion es una autentica y tremendisima ";//45
	char src[] = "puta mierdaaaaaaaa";//11
	char *aux = dst;
	int size = 7;
int i = 0;
		
	printf("Dst loc -> %p\n",dst);
	while (src[i])
	{printf("Dst src -> %p\n",&src[i]);
		i++;}
	printf("dst ->> %li\nsrc ->> %li\nsize ->> %i\n", ft_strlen(dst), ft_strlen(src), size);
	ft_memmove(aux, src, size);
	printf("----------------------------------------\n");
	printf("dst ->> %li\nsrc ->> %li\nsize ->> %i\n", ft_strlen(aux), ft_strlen(src), size);
	printf("aux -> %s\n", aux);
	printf("src -> %s\n", src);
	printf("----------------------------------------\n");
}

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
		if (auxdst == auxsrc + i)
			solape++;
		i++;
	}
	i = 0;
	while (i < len)
	{
		auxdst[len - 1 + i] = auxsrc[i];
		i++;
	}

	return (dst);
}
*/
