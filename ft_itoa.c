/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teloise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 01:14:57 by teloise           #+#    #+#             */
/*   Updated: 2020/11/18 06:22:45 by teloise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_int_len(int n)
{
	int int_len;

	int_len = 0;
	if (n < 0)
		int_len++;
	while (n)
	{
		n /= 10;
		int_len++;
	}
	return (int_len);
}

char			*ft_itoa(int n)
{
	int		int_len;
	char	*new_str;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	int_len = ft_int_len(n);
	if (!(new_str = (char *)malloc(sizeof(*new_str) * int_len + 1)))
		return (NULL);
	new_str[int_len--] = '\0';
	if (n < 0)
	{
		n *= -1;
		new_str[0] = '-';
	}
	while (n)
	{
		new_str[int_len] = (n % 10) + '0';
		n /= 10;
		int_len--;
	}
	return (new_str);
}
