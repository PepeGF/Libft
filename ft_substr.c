/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:33:41 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/24 15:19:50 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = (char *)ft_calloc(sizeof(char) * (len + 1), sizeof(char));
	if (str == NULL)
		return (0);
	if (len == 0)
		return (str);
	while (i < len && i + start < ft_strlen(s))
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
