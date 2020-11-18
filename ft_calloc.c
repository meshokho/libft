/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teloise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 01:08:06 by teloise           #+#    #+#             */
/*   Updated: 2020/11/18 01:08:30 by teloise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *buf;

	if (!(buf = malloc(nmemb * size)))
		return (NULL);
	buf = ft_memset(buf, 0, nmemb * size);
	return (buf);
}
