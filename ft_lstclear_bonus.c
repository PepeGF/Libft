/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:35:15 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/30 13:59:58 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!*lst)
		return ;
	temp = *lst;
	while (*lst)
	{
		temp = (*lst)->next;
	//	ft_lstdelone(*lst, del);
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = 0;
}
