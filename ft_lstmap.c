/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 16:06:24 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/11 18:20:35 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list	*result;

	if (lst && f)
	{
		newlist = (*f)(lst);
		result = newlist;
		while (lst->next)
		{
			newlist->next = (*f)(lst->next);
			lst = lst->next;
			newlist = newlist->next;
		}
		return (result);
	}
	else
		return (NULL);
}
