/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:34:07 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/21 13:40:27 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	
	char s1[] = "Aupa Atleti campeon";
	char s2[] = "Aupa Atleti Campeon";
	int	n = 15;

	printf("Mi función -> %i\n", ft_strncmp(s1, s2, n));
	printf("Función orig -> %i\n", strncmp(s1, s2, n));

	char s3[] = "";
	char s4[] = "Aupa Atleti Campeon";

	printf("Mi función -> %i\n", ft_strncmp(s3, s4, n));
	printf("Función orig -> %i\n", strncmp(s3, s4, n));

	char s5[] = "Aupa Atleti campeon";
	char s6[] = "";

	printf("Mi función -> %i\n", ft_strncmp(s5, s6, n));
	printf("Función orig -> %i\n", strncmp(s5, s6, n));
	printf ("---------------------\n");

	char s7[] = "";
	char s8[] = "";

	printf("s7: %s\n",s7);
	printf("s8: %s\n",s8);
	printf("Mi función -> %i\n", ft_strncmp(s7, s8, n));
	printf("Función orig -> %i\n", strncmp(s7, s8, n));
}
*/
