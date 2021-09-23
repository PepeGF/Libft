/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:27:09 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/22 11:19:25 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*aux;

	i = 0;
	aux = (unsigned char *)s;
	while (i < n)
	{
		if (aux[i] == (unsigned char) c)
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
