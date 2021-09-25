/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:53:24 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/25 20:39:20 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_substr(char const *s, char c);
static void	ft_memasig(char *aux, char c, int num_substr, char **ptr);
static char **ft_fillstr(char *aux, char c, int num_substr, char **ptr);

char	**ft_split(char const *s, char c)
{
	char	*aux;
	int		num_substr;
	char	**ptr;
	int		len_aux;

	if (!s)
		return (ptr = NULL);
	aux = ft_strtrim(s, &c);
	len_aux = ft_strlen(aux);
	aux[len_aux] = '\0';
	num_substr = ft_count_substr(s, c);
	ptr = (char **)malloc(sizeof(char *) * (num_substr + 1));
	if (!ptr)
		return (NULL);
	ft_memasig(aux, c, num_substr, ptr);
	ft_fillstr(aux, c, num_substr, ptr);
	ptr[num_substr] = NULL;
printf("\nOriginal ->%s\n",s);
	printf("Recortada ->%s\n",aux);
	printf("Separador ->%c\n",c);
	printf("Cadenas ->%i\n",num_substr);
	printf("--------------\n");


	return (ptr);
}
/*	printf("\nOriginal ->%s\n",s);
	printf("Recortada ->%s\n",aux);
	printf("Separador ->%c\n",c);
	printf("Cadenas ->%i\n",num_substr);
	printf("--------------\n");
*/

static int	ft_count_substr(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
//	if (s[0] != c)
//		counter++;
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


static void	ft_memasig(char *aux, char c, int num_substr, char **ptr)
{
	int i;
	int j;
	int	len_substr;

	i = 0;
	j = 0;
	len_substr = 0;
	while (j <= num_substr)
	{
		if (aux[i] != c && aux[i])
			len_substr++;
		else
		{
			len_substr = 0;
			ptr[j] = (char *)malloc(sizeof(char) * (len_substr + 1));
			j++;
		}
		i++;
	}
}


static char **ft_fillstr(char *aux, char c, int num_substr, char **ptr)
{
	int	i;
	int	j;
	int	substr;
num_substr *= 1;
	i = 0;
	substr = 0;
	j = 0;
	while (aux[i])
	{
		if (aux[i] != c && aux[i + 1] == 0)
		{
			ptr[substr][j] = aux[i];
			ptr[substr][j + 1] = '\0';
		}
		else if (aux[i] != c)
		{
			ptr[substr][j] = aux[i];
			j++;
		}
		else if (aux[i] == c && j > 0)
		{
			ptr[substr][j] = '\0';
			substr++;
			j = 0;
		}
		i++;
	}
	return (ptr);
}


int main()
{
	char *s = "AupaXXXXXXXXXXXXXX";
	char c = 'X';
	printf("WOLOLO->%s\n",ft_split(s, c)[0]);
	//printf("%c\n", ft_split(s, c)[0][0]);
}

// gccw ft_split.c ft_strlen.c ft_strtrim.c ft_strchr.c ft_strdup.c ft_strrchr.c ft_substr.c ft_calloc.c ft_strlcpy.c ft_bzero.c && ./a.out
