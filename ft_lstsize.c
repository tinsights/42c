/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaes <tinaes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 23:05:30 by tinaes            #+#    #+#             */
/*   Updated: 2023/09/10 23:34:14 by tinaes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*node;

	if (!lst)
		return (0);
	node = lst;
	len = 1;
	while (node->next)
	{
		len++;
		node = node->next;
	}
	return (len);
}
