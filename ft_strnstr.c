/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:14:00 by tjegades          #+#    #+#             */
/*   Updated: 2023/09/09 14:14:00 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	size_t	numchars;

	if (!(*little))
		return ((char *)big);
	numchars = 0;
	while (*big && numchars <= len)
	{
		if (*big == *little)
		{
			i = 0;
			while (little[i] && big[i])
			{
				if (big[i] != little[i] || ((numchars + (size_t)i) >= len))
					break ;
				i++;
			}
			if (little[i] == '\0')
				return ((char *)big);
		}
		numchars++;
		big++;
	}
	return ((char *)0);
}
