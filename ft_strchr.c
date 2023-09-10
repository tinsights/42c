/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:25:02 by tjegades          #+#    #+#             */
/*   Updated: 2023/09/09 13:25:03 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	i = 0;
	while (i <= len)
	{
		if (str[i] == (char) c)
			return ((char *)(str + i));
		i++;
	}
	return ((char *)(0));
}
