/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 12:46:54 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/11 14:53:38 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	if (s)
	{
		i = 0;
		result = ft_strnew(ft_strlen(s));
		if (!result)
			return (NULL);
		while (s[i])
		{
			result[i] = (*f)(i, s[i]);
			i++;
		}
		result[i] = '\0';
		return (result);
	}
	else
		return (NULL);
}
