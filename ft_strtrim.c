/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:47:31 by tjegades          #+#    #+#             */
/*   Updated: 2023/09/10 14:47:32 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sep(char c, const char *set);

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*result;
	int		len;

	while (*s1 && is_sep(*s1, set))
		s1++;
	len = ft_strlen(s1);
	while (len && is_sep(*(s1 + len - 1), set))
		len--;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = 0;
	ft_memcpy(result, s1, len);
	return (result);
}

int	is_sep(char c, const char *set)
{
	int	numseps;

	numseps = ft_strlen(set);
	while (numseps--)
		if (c == set[numseps])
			return (1);
	return (0);
}
