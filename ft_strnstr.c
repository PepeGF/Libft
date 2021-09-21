/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:15:51 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/21 14:11:10 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0' && i + j <= len)
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	char haystack[] = "ssFKÑJKS DFJSDFH SDFSDDFu asdbflsdfbsd b";
	char needle[] = "";
	int len = 400;

	printf("Mi función -> %s\n", ft_strnstr(haystack, needle,len));
	printf("Fun origig -> %s\n", strnstr(haystack, needle, len));

	char *s1 = "see FF your FF return FF now FF";
	char *s2 = "FF";
	size_t max = strlen(s1);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);

	if (i1 == i2)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);
}
*/
