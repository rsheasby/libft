/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 08:25:22 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/11 17:09:23 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*string1;
	unsigned char	*string2;

	if (!n)
		return (0);
	i = 0;
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	while (string1[i] && string1[i] && i < n)
	{
		if (string1[i] != string2[i])
		{
			return (string1[i] - string2[i]);
		}
		i++;
	}
	if (i >= n)
		return (0);
	return (string1[i] - string2[i]);
}
