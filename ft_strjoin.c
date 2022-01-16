/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 12:36:37 by josgarci          #+#    #+#             */
/*   Updated: 2021/10/02 14:00:34 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	s1len;
	size_t	s2len;

	if (!s2 && !s1)
		return (0);
	if (!s2)
		return ((char *)s1);
	if (!s1)
		return ((char *)s2);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = (char *)ft_calloc(sizeof(char) * (s1len + s2len + 1), sizeof(char));
	if (!str)
		return (0);
	i = -1;
	while (++i < s1len)
		str[i] = s1[i];
	i = -1;
	while (++i < s2len)
		str[i + s1len] = s2[i];
	return (str);
}
