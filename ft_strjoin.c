/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teloise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 01:11:47 by teloise           #+#    #+#             */
/*   Updated: 2020/11/18 01:12:27 by teloise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;
	size_t	k;

	if (!s1 || !s2)
		return (NULL);
	if (!(new_str = (char *)malloc(sizeof(*new_str) * (ft_strlen(s1) +
			ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		new_str[i] = s1[i];
		i++;
	}
	k = 0;
	while (i < ft_strlen(s1) + ft_strlen(s2) + 1)
	{
		new_str[i] = s2[k];
		i++;
		k++;
	}
	return (new_str);
}
