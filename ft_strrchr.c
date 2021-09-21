/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:37:16 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/19 21:57:13 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strlen (const char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}


char *ft_strrchr(const char *s, int c)
{
	int		i;
	char	*aux;
	
	i = ft_strlen(s);
	aux = (char *)s;
	s = s + i;
	while (*s != c && *s != aux[0])
		s--;
	if (*s == c)
		return ((char *)s);
	return (0);
}

int	main()
{
	char str[] = "Aupa Atleti Campeon";
	printf("%s\n",ft_strrchr(str, 'w'));
}
