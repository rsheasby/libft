/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 11:33:46 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/06 14:15:08 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	available;
	size_t	i;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	if (size > dstlen)
		available = size - ft_strlen(dst);
	else
		return (size + ft_strlen(src));
	i = 0;
	ft_strlcpy(dst + dstlen, src, available);
	return (dstlen + ft_strlen(src));
}
