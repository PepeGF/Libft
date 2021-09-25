/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:24:29 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/25 15:18:19 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_substr(char const *s, char c);
static void	ft_memasig(char const *s, char c, char **ptr);
static char **ft_addsubstr(char const *s, char c, char **ptr);

char	**ft_split(char const *s, char c)
{
	int		num_substr;
	int		i;
	char	**ptr;

	if (!*s || c == 0)
		return (0);
	num_substr = ft_count_substr(s, c);
	i = 0;
	ptr = (char **)malloc(sizeof(char *) * (num_substr + 1));
	if(!ptr)
		return (NULL);

	while (i < num_substr)
	{
		//asignar memoria a cada string
		ft_memasig(s, c, ptr);
		//añadir/copiar cadena a ptr
		ptr = ft_addsubstr(s, c, ptr);
		ptr[num_substr] = NULL;
	}
	return (ptr);
}

static int	ft_count_substr(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	if (s[0] != c)
		counter++;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			if (s[i + 1] == c || s[i + 1] == 0)
			{	
				i++;
				continue ;
			}
			i++;
			counter++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	return (counter);
}

static void	ft_memasig(char const *s, char c, char **ptr)
{
	int	i;
	int	len;
	int lentot;
	int	substr;

	i = 0;
	len = 0;
	totlen = ft_strlen(s);
	substr = 0;
	while (i <= lentot)
	{
		if (s[i] != c && s[i] != 0)
			len++;
		if (str[i] == c && len > 0)
		{
			ptr[substr] = (char *)malloc(sizeof(char) * (len + 1))
			if (!ptr)
				return (NULL);
			substr++;
			len = 0;
		}
		i++;
	}
}

static char **ft_addsubstr(char const *s, char c, char **ptr)
{
	int	i;
	int	j;
	int	substr;

	i = 0;
	j = 0;
	substr = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			ptr[substr][j] = s[i];
			j++;
		}
		else if (s[i + 1] == c || s[i + 1] == 0)
		{
			ptr[substr][j] = '\0';
			j = 0;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_split("", '-');
}
*/
