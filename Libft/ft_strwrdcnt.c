/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwrdcnt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccline <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 10:32:53 by ccline            #+#    #+#             */
/*   Updated: 2019/10/06 10:47:51 by ccline           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strwrdcnt(char const *s, char c)
{
	int words;

	words = 0;
	if (*s && *s != c)
	{
		s++;
		words++;
	}
	while (*s)
	{
		while (*s == c)
		{
			s++;
			if (*s && *s != c)
				words++;
		}
		s++;
	}
	return (words);
}
