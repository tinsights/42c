/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:37:17 by tjegades          #+#    #+#             */
/*   Updated: 2023/09/09 13:37:18 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		len;
	char	*result;

	result = (char *)(0);
	len = ft_strlen(str);
	i = 0;
	while (i <= len)
	{
		if (str[i] == (char) c)
			result = ((char *)(str + i));
		i++;
	}
	return (result);
}
