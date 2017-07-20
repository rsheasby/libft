/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsheasby <rsheasby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 06:45:32 by rsheasby          #+#    #+#             */
/*   Updated: 2017/06/11 14:54:46 by rsheasby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static size_t	rs_replace_delims(char *s, char delim)
{
	size_t	length;
	size_t	i;

	length = ft_strlen(s);
	i = 0;
	while (i < length)
	{
		if (s[i] == delim)
			s[i] = '\0';
		i++;
	}
	return (length);
}

static size_t	rs_find_next_string(char *s, size_t offset, size_t length)
{
	while (s[offset] && offset < length)
		offset++;
	while (!s[offset] && offset < length)
		offset++;
	return (offset);
}

static size_t	rs_count_strings(char *s, size_t length)
{
	size_t	result;
	size_t	offset;

	offset = 0;
	result = 0;
	while (offset < length)
	{
		offset = rs_find_next_string(s, offset, length);
		result++;
	}
	return (result);
}

static char		**rs_set_array(char *temp, size_t length, char **result)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!temp[i])
		i = rs_find_next_string(temp, i, length);
	while (i < length)
	{
		result[j] = ft_strdup(temp + i);
		if (result[j] == NULL)
			return (NULL);
		i = rs_find_next_string(temp, i, length);
		j++;
	}
	result[j] = NULL;
	return (result);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**result;
	char	*temp;
	size_t	length;

	if (s)
	{
		temp = ft_strdup(s);
		if (!temp)
			return (NULL);
		length = rs_replace_delims(temp, c);
		result = (char **)ft_memalloc(sizeof(*result) *
		(rs_count_strings(temp, length) + 1));
		if (!result)
			return (NULL);
		result = rs_set_array(temp, length, result);
		if (!result)
			return (NULL);
		free((void *)temp);
		return (result);
	}
	else
		return (NULL);
}
