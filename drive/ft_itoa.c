/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:00:57 by qde-vial          #+#    #+#             */
/*   Updated: 2013/11/19 14:00:59 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_itoa(int n)
{
	int i;
	int	swi;
	int	size;
	char *str;

	i = 0;
	swi = 0;
	if(n == -2147483648)
	{
		str = malloc(sizeof(char) * 12);
		str = "-2147483648";
		return (str);
	}
	if (n == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n < 0)
	{
		swi = 1;
		n = -n;
	}
	size = n;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	if (swi == 1)
	{
		i++;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
	{
		return (NULL);
	}
	str[i] = '\0';
	while (size > 0)
	{
		str[i - 1] = (size % 10) + 48;
		size /= 10;
		i--;
	}
	if (swi == 1)
	{
		str[0] = '-';
	}
	return (str);
}
