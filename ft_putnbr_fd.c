/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 18:36:48 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/11 17:49:36 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void			ft_putnbr_fd(int n, int fd)
{
	int		negate;
	size_t	multiplier;
	size_t	i;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	negate = 0;
	i = 0;
	if (n < 0)
	{
		n *= -1;
		negate = 1;
		ft_putchar_fd('-', fd);
	}
	multiplier = rs_get_multiplier(n);
	while (multiplier)
	{
		ft_putchar_fd(((n / multiplier) % 10) + 48, fd);
		multiplier /= 10;
	}
}
