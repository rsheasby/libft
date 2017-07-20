/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 15:14:18 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/05 07:21:29 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (char *)b;
	while (i < len)
	{
		*(temp + i) = c;
		i++;
	}
	return (b);
}
