/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 07:22:11 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/03 14:31:53 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;

	i = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			if (!little[j + 1])
			{
				return ((char *)(big + i));
			}
			j++;
		}
		i++;
	}
	return (0);
}
