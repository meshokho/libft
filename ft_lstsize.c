/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teloise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 01:28:43 by teloise           #+#    #+#             */
/*   Updated: 2020/11/18 01:29:23 by teloise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp_list;

	if (!lst)
		return (0);
	i = 1;
	temp_list = lst;
	while (temp_list->next != NULL)
	{
		temp_list = temp_list->next;
		i++;
	}
	return (i);
}
