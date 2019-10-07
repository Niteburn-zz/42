/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccline <ccline@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 21:59:09 by ccline            #+#    #+#             */
/*   Updated: 2019/10/05 10:43:36 by ccline           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *first;
	t_list *pos;

	first = f(lst);
	if (!first)
		return (NULL);
	pos = first;
	while (lst->next)
	{
		lst = lst->next;
		pos->next = f(lst);
		if (!(pos->next))
			return (NULL);
		pos = pos->next;
	}
	return (first);
}
