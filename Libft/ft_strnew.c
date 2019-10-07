/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccline <ccline@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:52:54 by ccline            #+#    #+#             */
/*   Updated: 2019/10/05 11:27:41 by ccline           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	int		i;
	char	*s;

	i = 0;
	if (!(s = malloc(sizeof(char) * (size) + 1)))
		return (NULL);
	s[size] = '\0';
	while (size--)
		s[size] = '\0';
	return (s);
}
