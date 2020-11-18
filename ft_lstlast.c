/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teloise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 01:30:00 by teloise           #+#    #+#             */
/*   Updated: 2020/11/18 01:30:18 by teloise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *temp_list;

	if (!lst)
		return (NULL);
	temp_list = lst;
	while (temp_list->next != NULL)
		temp_list = temp_list->next;
	return (temp_list);
}
