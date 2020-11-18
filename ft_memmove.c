/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teloise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 00:38:14 by teloise           #+#    #+#             */
/*   Updated: 2020/11/18 00:38:55 by teloise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (src < dest)
		while (n)
		{
			((char*)dest)[n - 1] = ((char*)src)[n - 1];
			n--;
		}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
