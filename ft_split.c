/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:53:24 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/27 17:54:24 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_substr(char const *s, char c);
static void	ft_memasig(char *aux, char c, char **ptr);
static char	**ft_fillstr(char *aux, char c, int num_substr, char **ptr);

char	**ft_split(char const *s, char c)
{
	char	*aux;
	int		num_substr;
	char	**ptr;

	if (!s)
		return (ptr = NULL);
	aux = (char *)s;
	num_substr = ft_count_substr(s, c);
	ptr = (char **)malloc(sizeof(char *) * (num_substr + 1));
	if (!ptr)
		return (NULL);
	ft_memasig(aux, c, ptr);
	return (ft_fillstr(aux, c, num_substr, ptr));
}

static int	ft_count_substr(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	if (s[0] != c && s[0])
		counter++;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				i++;
				continue ;
			}
			i++;
			counter++;
		}
		if (s[i] != c && s[i])
			i++;
	}
	return (counter);
}

static void	ft_memasig(char *aux, char c, char **ptr)
{
	int	i;
	int	j;
	int	len_substr;

	i = 0;
	j = 0;
	len_substr = 0;
	while (aux[i])
	{
		if (aux[i] != c)
		{
			len_substr++;
			if ((aux[i + 1] == c || aux[i + 1] == '\0') && len_substr != 0)
			{
				ptr[j] = (char *)malloc(sizeof(char) * (len_substr + 1));
				if (!ptr[j])
					return ;
				len_substr = 0;
				j++;
			}
		}
		i++;
	}
}

static char	**ft_fillstr(char *aux, char c, int num_substr, char **ptr)
{
	int	i;
	int	j;
	int	substr;

	i = 0;
	substr = 0;
	j = 0;
	while (aux[i])
	{
		if (aux[i] != c)
		{
			ptr[substr][j] = aux[i];
			j++;
			if (aux[i + 1] == c || aux[i + 1] == '\0')
			{
				ptr[substr][j] = '\0';
				j = 0;
				substr++;
			}
		}
		i++;
	}
	ptr[num_substr] = NULL;
	return (ptr);
}
