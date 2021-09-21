/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:08:13 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/21 14:59:14 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char *aux;

	aux = (unsigned char *)b; 
	i = 0;
	while (i < len && aux[i] != '\0')
	{
		aux[i] = (unsigned char) c;
		i++;
	}
	return (aux);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "";
	char letra = 'X';
	char b1[3840];
	int i = 0;
	while (i < 18)
	{b1[i]='B';
		i++;}

	char *r2 = memset(b1, 'A', 18);
	printf("%s esta es r2\n",r2);
	printf("Mi función: %s\n", ft_memset(str, letra, 0));
	printf("---------------------------------\n");
	printf("Función original: %s\n", memset(str, letra, (0)));

	printf("Son diferentes si no es 0 ->%i\n",
			strcmp(ft_memset(str, letra, 0), memset(str, letra, (0))));
	printf("%p -> mi ft, %p -> orig\n",ft_memset(str, letra, 0), memset(str, letra, (0)));
	printf("%i\n",memcmp(ft_memset(str, letra, 0),memset(str, letra, (0)),20));
}
*/
