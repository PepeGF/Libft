/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:30:03 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/21 09:59:26 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return (s);
	return (NULL);	//cambiar null por 0
}

/*
#include "libft.h"
char ft_strchr(const char *s, int c)
{
	int i;

	while (i <= strlen(s))
		if (s[i] != c)
		{
			i++;
			s++;
		}
	if (i == strlen(s))
		return (NULL);
	else
		return (s);
}
*/
