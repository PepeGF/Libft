/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:32:46 by josgarci          #+#    #+#             */
/*   Updated: 2021/10/02 12:47:10 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	lens1;

	lens1 = ft_strlen(s1);
	ptr = (char *)malloc(sizeof(char) * (lens1 + 1));
	if (ptr == NULL)
		return (0);
	ft_strlcpy(ptr, s1, lens1 + 1);
	return (ptr);
}
