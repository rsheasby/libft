/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 17:22:20 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/10 18:34:11 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	rs_get_string_length(long n)
{
	size_t	result;

	result = 0;
	if (n < 0)
	{
		n *= -1;
		result++;
	}
	else if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		result++;
	}
	return (result);
}

static size_t	rs_get_multiplier(long n)
{
	size_t	multiplier;

	multiplier = 1;
	if (n < 0)
	{
		n *= -1;
	}
	while (n / 10)
	{
		n = n / 10;
		multiplier *= 10;
	}
	return (multiplier);
}

char			*ft_itoa(int n)
{
	char	*result;
	int		negate;
	size_t	multiplier;
	size_t	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	result = ft_strnew(rs_get_string_length(n));
	if (!result)
		return (NULL);
	negate = 0;
	i = 0;
	if (n < 0)
	{
		n *= -1;
		negate = 1;
		result[0] = '-';
	}
	multiplier = rs_get_multiplier(n);
	while (multiplier)
	{
		result[i++ + negate] = ((n / multiplier) % 10) + 48;
		multiplier /= 10;
	}
	return (result);
}
