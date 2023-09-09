/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:35:17 by tjegades          #+#    #+#             */
/*   Updated: 2023/09/09 14:35:18 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		idx;
	char	*copy;

	idx = 0;
	while (src[idx])
		idx++;
	copy = malloc(idx + 1);
	if (!copy)
		return (0);
	idx = 0;
	while (*src)
		copy[idx++] = *src++;
	copy[idx] = '\0';
	return (copy);
}
