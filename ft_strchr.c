/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teloise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 00:47:07 by teloise           #+#    #+#             */
/*   Updated: 2020/11/18 00:47:28 by teloise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *temp_s;

	temp_s = (char *)s;
	while (*temp_s != '\0')
	{
		if (*temp_s == c)
			return (temp_s);
		temp_s++;
	}
	if (c == '\0')
		return (temp_s);
	return (NULL);
}
