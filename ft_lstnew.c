/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 15:20:08 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/11 15:34:34 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*result;

	result = (t_list *)ft_memalloc(sizeof(t_list));
	if (!result)
		return (NULL);
	if (!content)
	{
		result->content = NULL;
		result->content_size = 0;
		return (result);
	}
	result->content = ft_memalloc(content_size);
	ft_memcpy(result->content, content, content_size);
	result->content_size = content_size;
	result->next = NULL;
	return (result);
}
