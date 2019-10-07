/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccline <ccline@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:27:24 by ccline            #+#    #+#             */
/*   Updated: 2019/10/06 10:12:36 by ccline           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int min;
	unsigned int max;

	min = 0;
	if (s == NULL)
		return (NULL);
	while (s[min] && (s[min] == ' ' || s[min] == '\n' || s[min] == '\t'))
		min++;
	if (s[min] == '\0')
		return (ft_strdup(s + min));
	max = min;
	while (s[max])
		max++;
	max -= 1;
	while (s[max] == ' ' || s[max] == '\n' || s[max] == '\t')
		max--;
	return (ft_strsub(s, min, max - min + 1));
}
