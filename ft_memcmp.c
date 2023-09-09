/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:23:33 by tjegades          #+#    #+#             */
/*   Updated: 2023/09/09 15:23:34 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i + 1 < n)
		&& (*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i)))
		i++;
	return (!!n * (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i)));
}
