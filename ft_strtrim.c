/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:26:07 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/25 11:20:39 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first_diff;
	size_t	last_diff;

	if (!s1 || !set)
		return (0);
	first_diff = 0;
	last_diff = ft_strlen(s1) - 1;
	while (s1[first_diff] && ft_strchr(set, s1[first_diff]))
		first_diff++;
	if (first_diff == last_diff + 1)
		return (ft_strdup(""));
	while (s1[last_diff] && ft_strrchr(set, s1[last_diff]))
		last_diff--;
	return (ft_substr(s1, first_diff, last_diff - first_diff + 1));
}
