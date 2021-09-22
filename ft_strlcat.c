/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:42:39 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/22 19:19:01 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>//solo para linux
// compilar con -lbsd
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	(void )dst;
	(void )src;
	return (size);
}

int main ()
{
	char dst[] = "Aupa Atleti campeon";
	char src[] = "wololololollo";
	int size = 10;

	printf("Orig: %li\n", strlcat(dst, src, size));
	printf("dst -> %s\n", dst);
	printf("src -> %s\n", src);
	return (0);
}
