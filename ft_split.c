/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:24:02 by tjegades          #+#    #+#             */
/*   Updated: 2023/09/10 15:24:03 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_separators(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		count;
	int		i;
	int		j;

	count = count_separators(s, c);
	result = malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	result[count] = 0;
	i = 0;
	while (i < count && *s)
	{
		while (*s && *s == c)
			s++;
		j = 1;
		while (s[j] && (s[j] != c))
			j++;
		result[i] = ft_substr(s, 0, j);
		i++;
		s += j;
	}
	return (result);
}

int	count_separators(char const *s, char c)
{
	int	count;

	if (*s && !c)
		return (1);
	while (c && *s == c)
		s++;
	count = 0;
	if (*s)
		count = 1;
	while (*s)
	{
		if ((*s == c)
			&& *(s + 1) && (*(s + 1) != c))
			count++;
		s++;
	}
	return (count);
}
