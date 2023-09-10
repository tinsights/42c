/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:41:46 by tjegades          #+#    #+#             */
/*   Updated: 2023/09/10 14:41:47 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	char	*result;

	len = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = 0;
	i = 0;
	while (*s1)
		*(result + i++) = *s1++;
	while (*s2)
		*(result + i++) = *s2++;
	return (result);
}
