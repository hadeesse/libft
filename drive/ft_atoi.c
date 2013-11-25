/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:00:57 by qde-vial          #+#    #+#             */
/*   Updated: 2013/11/19 14:00:59 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

 int	ft_atoi(const char *str)
{
	int	i;
	int	signe;
	int	nbr;

	i = 0;
	signe = 0;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = 1;
		i++;
	}
	while (str[i] != '\0' && ft_isdigit(str[i]) == 1)
	{
		nbr = nbr * 10;
		nbr += str[i] - 48;
		i++;
	}
	if (signe == 1)
		nbr = -nbr;
	return (nbr);
}
