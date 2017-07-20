/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 15:55:19 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/11 18:15:54 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t len1;

	len1 = ft_strlen(s1);
	if (ft_strlen(s2) < n)
	{
		ft_strcpy(s1 + len1, (char *)s2);
	}
	else
	{
		ft_strncpy(s1 + len1, (char *)s2, n);
		s1[len1 + n] = '\0';
	}
	return (s1);
}
