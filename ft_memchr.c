/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:27:09 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/21 10:37:00 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*aux;

	i = 0;
	aux = (char *)s;
	printf("%p\n",aux);
	while (aux[i] && i < n)
	{
		write(1, &aux[i], 1);
		if (aux[i] == c)
			return (aux + i);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char str[] = "Aupa Atleti campeon";
	printf("%p\n",str);
	printf("%p\n",ft_memchr(str, 'e', 15));
	return (0);
}
*/
