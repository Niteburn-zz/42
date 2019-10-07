/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccline <ccline@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 21:43:02 by ccline            #+#    #+#             */
/*   Updated: 2019/10/06 10:16:06 by ccline           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *new;

	if (!(new = (char*)malloc(
					sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	new = ft_strcpy(new, s1);
	return (new);
}
