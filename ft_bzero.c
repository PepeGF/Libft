/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:14:38 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/22 10:40:42 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)s = '\0';
		i++;
		s++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char c = 'X';
	char str[14] = "Aupa Atleti";
	printf("%s\n", str);
	printf("--------\n");
	ft_bzero(str, 3);
	printf("%s\n", str);
	printf("--------\n");
	//printf("%s\n", ft_bzero(str, 3));
	printf("\n");
	printf("--------\n");



	return (0);
}	
*/
