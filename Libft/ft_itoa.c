/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccline <ccline@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:31:45 by ccline            #+#    #+#             */
/*   Updated: 2019/10/05 10:39:42 by ccline           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				neg;
	int				intsize;
	char			*res;
	unsigned int	nbr;

	res = NULL;
	nbr = n < 0 ? -n : n;
	intsize = ft_intsize(n);
	if (!(res = (char *)malloc(sizeof(char) * intsize + 1)))
		return (NULL);
	neg = n < 0 ? 1 : 0;
	res[intsize--] = '\0';
	while (intsize >= 0)
	{
		res[intsize] = nbr % 10 + '0';
		nbr /= 10;
		intsize--;
	}
	if (neg == 1)
		res[0] = '-';
	return (res);
}
