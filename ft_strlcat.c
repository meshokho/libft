/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teloise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 00:45:29 by teloise           #+#    #+#             */
/*   Updated: 2020/11/18 00:45:44 by teloise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_ptr;
	size_t src_ptr;

	dst_ptr = 0;
	src_ptr = 0;
	while (dst[dst_ptr] && dst_ptr < size)
		dst_ptr++;
	while (src[src_ptr] && (dst_ptr + src_ptr + 1) < size)
	{
		dst[dst_ptr + src_ptr] = src[src_ptr];
		src_ptr++;
	}
	if (dst_ptr < size)
		dst[dst_ptr + src_ptr] = '\0';
	return (dst_ptr + ft_strlen(src));
}
