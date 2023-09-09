/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:09:49 by tjegades          #+#    #+#             */
/*   Updated: 2023/09/09 15:09:50 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src < dest && src + n > dest)
	{
		dest += n;
		src += n;
		while (n--)
			*(char *)(--dest) = *(char *)(--src);
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
