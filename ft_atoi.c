/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:21:29 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/16 15:03:56 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
unsigned long int	ft_atoi(const char *str)
{
	int	i;
	unsigned long int n;
	int neg;

	i = 0;
	neg = 1; //por qué 1 y no 0??
	n = 0;
	//n tengo que inicializarla? -> es muy recomendable
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\f' || str[i] == '\v' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (n * neg);
}
#include <stdlib.h>
int main(void)
{
	unsigned long int i;
	unsigned long int j;
	char str[]= "18400000000000000000";
	j  = atoi(str);
	i = ft_atoi(str);
	printf("funcion original %lu\n", j);
	printf("mi funcion %lu\n", i);
	return(0);
}


/*
int	ft_atoi(const char *str)
{
	int	num;
	int	i;
	int	neg;

	num = 0;
	i = 0;
	neg = 1;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i])
	{
		num = (num * 10) + str[i] - '0';
		i++;
	}
	return (num*neg);
}

#include <stdlib.h>
#include <stdio.h>
int main()
{
	char marta[] = "12345";
	int num;

	num = ft_atoi(marta);
	printf("Num marta: %i\n",num*2);
	printf("Num marta: %i\n",num);
	return (0);
}*/
