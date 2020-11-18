/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teloise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 00:48:19 by teloise           #+#    #+#             */
/*   Updated: 2020/11/18 00:48:36 by teloise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int str_len;

	str_len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + str_len);
	while (str_len)
	{
		if (*(s + str_len - 1) == (char)c)
			return ((char *)(s + str_len - 1));
		str_len--;
	}
	return (NULL);
}
