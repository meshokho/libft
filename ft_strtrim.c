/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teloise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:39:13 by teloise           #+#    #+#             */
/*   Updated: 2020/11/18 02:29:34 by teloise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_begin_counter(char const *s1, char const *set)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (set[k] && s1[i])
	{
		if (s1[i] != set[k])
			k++;
		else
		{
			k = 0;
			i++;
		}
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		k;
	int		end_line;

	if (!s1 || !set)
		return (NULL);
	i = ft_begin_counter(s1, set);
	end_line = ft_strlen(s1) - 1;
	k = 0;
	while (set[k] && s1[i])
	{
		if (s1[end_line] != set[k])
			k++;
		else
		{
			k = 0;
			end_line--;
		}
	}
	result = ft_substr(s1, i, (size_t)(end_line - i + 1));
	return (result);
}
