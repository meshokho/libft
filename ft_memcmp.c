/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teloise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 00:41:02 by teloise           #+#    #+#             */
/*   Updated: 2020/11/18 00:42:07 by teloise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *temp_s1;
	unsigned char *temp_s2;

	if (n == 0)
		return (0);
	temp_s1 = (unsigned char*)s1;
	temp_s2 = (unsigned char*)s2;
	while (n--)
	{
		if (*temp_s1 != *temp_s2)
			return (*temp_s1 - *temp_s2);
		if (n)
		{
			temp_s1++;
			temp_s2++;
		}
	}
	return (0);
}
