/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teloise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 00:39:46 by teloise           #+#    #+#             */
/*   Updated: 2020/11/18 00:40:22 by teloise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *temp_s;
	unsigned char stop_char;

	temp_s = (unsigned char *)s;
	stop_char = (unsigned char)c;
	if (c || c == '\0')
	{
		while (n)
		{
			if (*temp_s != stop_char)
			{
				temp_s++;
				n--;
			}
			else
			{
				return ((void *)temp_s);
			}
		}
	}
	return (NULL);
}
