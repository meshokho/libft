/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teloise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 01:09:01 by teloise           #+#    #+#             */
/*   Updated: 2020/11/18 01:09:34 by teloise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	i;

	if (!(new_str = (char *)malloc(sizeof(*new_str) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (i < ft_strlen(s) + 1)
	{
		new_str[i] = s[i];
		i++;
	}
	return (new_str);
}
