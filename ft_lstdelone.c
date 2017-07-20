/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 15:34:56 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/11 18:19:01 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alist, void (*del)(void *, size_t))
{
	t_list	*temp;

	if (alist)
	{
		temp = *alist;
		(*del)(temp->content, temp->content_size);
		free(*alist);
		*alist = NULL;
	}
}
