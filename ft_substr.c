/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:30:21 by tjegades          #+#    #+#             */
/*   Updated: 2023/09/10 14:30:22 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	origlen;

	origlen = ft_strlen(s);
	if (start >= origlen)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[0] = 0;
		return (result);
	}
	if (len > origlen - start)
		len = origlen - start;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = 0;
	while (len--)
		result[len] = s[start + len];
	return (result);
}
