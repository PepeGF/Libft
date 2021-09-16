/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:53:15 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/14 09:18:54 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c >= '0' && c >= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

// Se puede hacer también return (ft_isdigit(c) || ft_isalpha(c))
// en este caso habría que incluir la librería libft.h

/*
int	ft_isalnum(int c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a')
		|| c > 'z')
		return (0);
	return (1);
}
*/
// NORM OK
// TEST NO
