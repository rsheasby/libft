/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 15:42:01 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/11 18:20:26 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alist, void (*del)(void *, size_t))
{
	t_list	*temp;

	if (alist)
	{
		temp = *alist;
		if (temp->next)
			ft_lstdel(&temp->next, del);
		(*del)(temp->content, temp->content_size);
		free(*alist);
		*alist = NULL;
	}
}
