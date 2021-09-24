/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:26:07 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/24 20:38:34 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first_diff;
	size_t	last_diff;
	char	*str;

	if (!*s1)
		return (0);
	first_diff = 0;
	last_diff = ft_strlen(s1);
	while (s1 )
	{
		i = 0;
		while (ft_strchr(s1, set[i]))
			s1++;
		first_diff++;
	}
}
