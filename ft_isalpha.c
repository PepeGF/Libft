/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:30:17 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/14 12:16:03 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_salpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

#include <stdio.h>
int main(void)
{
	char c = 'X';
	printf("%i\n", c);
	return 0;
}

/*
int	ft_salpha(int c)
{
	if (str[counter] < 'A' || (str[counter] > 'Z' && str[counter] < 'a')
		|| str[counter] > 'z')
		return (0);
	return (1);
}
*/
// NORM OK
// SIN TEST
