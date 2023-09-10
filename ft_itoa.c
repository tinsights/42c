/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:48:49 by tjegades          #+#    #+#             */
/*   Updated: 2023/09/10 15:48:50 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	long	copy;
	char	*result;

	len = 1 + (n < 0);
	copy = (n >= 0) * n + (n < 0) * -1 * (long) n;
	while (copy >= 10)
	{
		len++;
		copy /= 10;
	}
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = 0;
	copy = (n >= 0) * n + (n < 0) * -1 * (long) n;
	if (!copy)
		result[0] = 48;
	while (copy > 0)
	{
		result[len - 1] = copy % 10 + 48;
		copy /= 10;
		len--;
	}
	if (n && len)
		result[0] = '-';
	return result;
}
