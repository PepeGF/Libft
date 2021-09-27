/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:24:29 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/25 16:52:54 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_substr(char const *s, char c);
static void	ft_memasig(char const *s, char c, char **ptr);
static char **ft_addsubstr(char const *s, char c, char **ptr);

char	**ft_split(char const *s, char c)
{
	char	*aux;
	int		num_substr;
	int		i;
	int		slen;
	char	**ptr;

	aux = ft_strtrim(s, &c);
//	printf("\n%s\n",s);
//	printf("Separador -> %c\n", c);
//	printf("Recortada -> %s\n", aux);

	if (!*s || c == 0)
		return (0);
	slen = ft_strlen(s);
	num_substr = ft_count_substr(s, c);
	printf("Subcadenas -> %i\n", num_substr);
	i = 0;
	ptr = (char **)malloc(sizeof(char *) * (num_substr + 1));
	if(!ptr)
		return (NULL);
		ft_memasig(s, c, ptr);
		ptr = ft_addsubstr(s, c, ptr);
		ptr[num_substr] = NULL;
	return (ptr);
}

static void	ft_memasig(char const *s, char c, char **ptr)
{
	int	i;
	int	len;
	int lentot;
	int	substr;

	i = 0;
	len = 0;
	lentot = ft_strlen(s);
	substr = 0;
	while (i <= lentot)
	{
		if (s[i] != c && s[i] != 0)
			len++;
		if (s[i] == c && len > 0)
		{
			ptr[substr] = (char *)malloc(sizeof(char) * (len + 1));
			substr++;
			len = 0;
		}
		i++;
	}
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
		if (s[i] != c && s[i])
			i++;
	}
	return (counter);
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
	return (ptr);
}
/*
int	main(void)
{

	ft_split("", '-');
}
*/
int main ()
{
	char s[] = "Aupa Atleti Campeon";
	char c = ' ';
	printf("%s\n",ft_split(s, c)[0]);
//	printf("%s\n",ft_split(s, c)[1]);
//	printf("%s\n",ft_split(s, c)[2]);
//	printf("%s\n",ft_split(s, c)[3]);
}
