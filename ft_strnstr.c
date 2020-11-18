/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teloise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 00:49:12 by teloise           #+#    #+#             */
/*   Updated: 2020/11/18 00:49:31 by teloise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int k;

	if (ft_strlen(little) == 0)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && (size_t)i < len)
	{
		if (big[i] == little[0])
		{
			k = 1;
			while (little[k] != '\0' && big[i + k] == little[k] && (size_t)
			(i + k) < len)
				k++;
			if (little[k] == '\0')
				return ((char*)&big[i]);
		}
		i++;
	}
	return (0);
}
