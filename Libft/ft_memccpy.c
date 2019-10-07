/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccline <ccline@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:03:48 by ccline            #+#    #+#             */
/*   Updated: 2019/10/05 10:49:22 by ccline           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	while (n--)
	{
		*s1 = *s2;
		if (*s1 == (unsigned char)c)
			return (s1 + 1);
		s1++;
		s2++;
	}
	return (NULL);
}
