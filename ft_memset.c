/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:08:13 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/22 10:37:49 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	 char	*aux;
	 c = (unsigned char) c;

	aux = ( char *)b;
	i = 0;
//	if (c == 0)
//		return (0);
	while (i < len)
	{
		aux[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char src[] = "/|\x12\xff\x09\0\x42\042\0\42|\\";
	int size = 12;

	printf("mia -> %p\n",(char *)ft_memset(src, '\0', size));
	printf("orig -> %p\n", (char *)memset(src, '\0', size));
}
*/
