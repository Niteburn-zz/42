/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccline <ccline@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:53:56 by ccline            #+#    #+#             */
/*   Updated: 2019/10/05 10:50:18 by ccline           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *new;

	new = (unsigned char*)s;
	while (n-- != 0)
		if (*new++ == (unsigned char)c)
			return ((void*)--new);
	return (NULL);
}
