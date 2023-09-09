/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:39:58 by tjegades          #+#    #+#             */
/*   Updated: 2023/09/09 13:39:59 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	counter = 1;
	while (*s1 && *s2 && counter < n && *s1 == *s2)
	{
		s1++;
		s2++;
		counter++;
	}
	return (!!n * ((unsigned char)*s1 - (unsigned char)*s2));
}
