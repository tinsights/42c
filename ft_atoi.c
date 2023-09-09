/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:13:22 by tjegades          #+#    #+#             */
/*   Updated: 2023/09/09 13:13:23 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c);

int	ft_atoi(const char *nptr)
{
	int		polarity;
	long	nb;

	nb = 0;
	polarity = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			polarity *= -1;
	while (*nptr > 47 && *nptr < 58)
		nb = nb * 10 + *nptr++ - 48;
	return ((int)(polarity * nb));
}

int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}
