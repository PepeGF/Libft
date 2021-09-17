/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:12:30 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/15 09:57:08 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
//	size_t	i;
	size_t	len;

//	i = 0;
	len = ft_strlen(src);
	printf("dst --> %s\n",dst);
	printf("size --> %lu\n", size);
	return (len);
}

int	main(void)
{
	char src[]= "Aupa Atleti Campeon lorolololo";
	char dst[31];
	int size = 31;

	printf("len --> %lu\n", ft_strlcpy(dst, src, size));
	return 0;
}
