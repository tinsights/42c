/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:29:43 by tjegades          #+#    #+#             */
/*   Updated: 2023/09/09 14:29:43 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_length;
	size_t	src_length;

	dst_length = 0;
	src_length = 0;
	while (dst[dst_length] && dst_length < size)
		dst_length++;
	while (src[src_length])
		src_length++;
	i = 0;
	if (dst_length < size)
	{
		while (src[i] != '\0' && dst_length + 1 < size)
		{
			dst[dst_length] = src[i];
			dst_length++;
			i++;
		}
		dst[dst_length] = '\0';
	}
	return (dst_length - i + src_length);
}
