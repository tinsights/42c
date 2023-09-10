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

#include "libft.h"

char	*ft_itoa(int n)
{
	char	temp[12];
	int		len;
	int		copy;

	if (!n)
		return (ft_strdup("0\0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	temp[11] = '\0';
	len = 0;
	copy = (n < 0) * -1 * n + (n > 0) * n;
	while (copy)
	{
		len++;
		temp[11 - len] = copy % 10 + 48;
		copy /= 10;
	}
	if (n < 0)
		temp[10 - len++] = '-';
	return (ft_strdup(temp + 11 - len));
}
