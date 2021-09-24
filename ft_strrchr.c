/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:37:16 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/24 15:40:56 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*aux;

	i = ft_strlen(s);
	aux = (char *)s;
	s = s + i;
	while (*s != (unsigned char)c && *s != aux[0])
		s--;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (0);
}
