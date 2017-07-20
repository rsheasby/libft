/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 13:32:21 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/05 07:21:13 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*string;
	char	character;

	i = 0;
	string = (char *)s;
	character = (char)c;
	while (i < n)
	{
		if (string[i] == character)
			return (string + i);
		i++;
	}
	return (NULL);
}
