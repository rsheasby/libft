/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 13:11:37 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/11 14:55:39 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (s)
	{
		result = ft_strnew(len);
		if (!result)
			return (NULL);
		else
		{
			ft_strncpy(result, s + start, len);
		}
		return (result);
	}
	return (NULL);
}
