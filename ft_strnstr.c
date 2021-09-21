/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:15:51 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/21 10:39:40 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0' && i + j <= len)
			return ((char *)big + i);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char big[] = "Aupa atleti campeon";
	char little[] = "atle";
	int len = 8;

	printf("Mi función -> %s\n", ft_strnstr(big, little,len));
//	printf("Fun origig -> %s\n", strnstr(big, little, len));
}
*/
