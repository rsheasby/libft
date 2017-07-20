/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 07:46:43 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/05 07:21:10 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*destination;
	unsigned char	*source;
	unsigned char	character;

	i = 0;
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	character = (unsigned char)c;
	while (i < n)
	{
		destination[i] = source[i];
		if (source[i] == character)
			return (destination + i + 1);
		i++;
	}
	return (NULL);
}
