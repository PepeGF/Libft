/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:08:13 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/14 13:06:01 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 1;
	while (i <= len)
	{
		*(unsigned char *)b = (unsigned char) c;
		i++;
		b++;
	}
	return (b);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char c = 'X';
	char str[14] = "Aupa Atleti";
	printf("%s\n", str);
	char *otro;
	otro = memset(str, c, 30); 
	printf("--------\n");
	printf("%s\n", str);
	printf("--------\n");
	printf("%s\n", memset(str, c, 30));
	printf("\n");
	printf("--------\n");



	return (0);
}
*/
