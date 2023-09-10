/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:58:43 by tjegades          #+#    #+#             */
/*   Updated: 2023/09/09 15:58:44 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*result;
	int		numbytes;

	numbytes = (int)nmemb * (int)size;
	result = malloc(numbytes);
	if (result)
		while (numbytes--)
			*(result + numbytes) = 0;
	return (result);
}
