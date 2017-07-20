/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 13:25:56 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/11 14:53:16 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

	if (s1 && s2)
	{
		result = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (!result)
			return (result);
		else
		{
			ft_strcpy(result, s1);
			ft_strcat(result, s2);
			return (result);
		}
	}
	else
		return (NULL);
}
