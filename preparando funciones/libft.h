/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:15:50 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/16 10:34:55 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalpha(int c); //test propio OK
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

#endif
