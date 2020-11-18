/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teloise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:52:39 by teloise           #+#    #+#             */
/*   Updated: 2020/11/18 03:41:43 by teloise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_string_number(char const *s, const char c)
{
	int number;
	int i;

	if (!s)
		return (0);
	number = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			if (s[i + 1] == c || s[i + 1] == '\0')
				number++;
		i++;
	}
	return (number);
}

static int		ft_string_len(char const *s, const char c)
{
	int string_len;
	int i;

	i = 0;
	string_len = 0;
	while (s[i] && s[i] != c)
	{
		string_len++;
		i++;
	}
	return (string_len);
}

static void		*ft_err_result(char **result, int i)
{
	int k;

	k = 0;
	while (k < i)
	{
		free(result[k]);
		k++;
	}
	free(result);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	int		string_number;
	char	**result;
	int		string_len;
	int		i;
	int		k;

	string_number = ft_string_number(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (string_number + 1))))
		return (NULL);
	i = -1;
	while (++i < string_number)
	{
		while (*s == c)
			s++;
		string_len = ft_string_len(s, c);
		if (!(result[i] = (char *)malloc(sizeof(char) * (string_len + 1))))
			return (ft_err_result(result, i));
		k = 0;
		while (k < string_len)
			result[i][k++] = *s++;
		result[i][k] = '\0';
	}
	result[i] = NULL;
	return (result);
}
