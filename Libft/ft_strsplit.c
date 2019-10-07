/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccline <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 09:56:02 by ccline            #+#    #+#             */
/*   Updated: 2019/10/06 10:48:18 by ccline           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wrds(char const *s, char c)
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

static int		ft_wlen(char const *s, char c)
{
	int len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**res;

	i = 0;
	j = 0;
	if (!s || (!(res = (char **)malloc(sizeof(char*) * (ft_wrds(s, c) + 1)))))
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if (!(res[i] = (char *)malloc(sizeof(char) * (ft_wlen(s, c) + 1))))
				return (NULL);
			while (*s && *s != c)
				res[i][j++] = (char)*s++;
			res[i][j] = '\0';
			i++;
			j = 0;
		}
	}
	res[i] = NULL;
	return (res);
}
