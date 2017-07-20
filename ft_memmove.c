/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 15:40:41 by rsheasby          #+#    #+#             */
/*   Updated: 2017/07/20 10:17:01 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*destination;
	char	*source;

	destination = (char *)dst;
	source = (char *)src;
	i = 0;
	if (dst < src)
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	else if (dst > src)
		while (len--)
			destination[len] = source[len];
	return (dst);
}
