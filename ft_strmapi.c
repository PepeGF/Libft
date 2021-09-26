/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:30:16 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/26 19:45:19 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strmmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*aux;

	i = 0;
	aux = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!aux)
		return (0);
	while (s[i])
	{
		aux[i] = f(i, s[i]);
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
