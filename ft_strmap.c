/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 15:18:13 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/11 14:53:46 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			result[i] = (*f)(s[i]);
			i++;
		}
		result[i] = '\0';
		return (result);
	}
	else
		return (NULL);
}
