/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:02:58 by qde-vial          #+#    #+#             */
/*   Updated: 2013/11/19 14:02:59 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	int		i;

	i = 0;
	if (!size)
	{
		return (NULL);
	}
	s = (char *)malloc(sizeof(char) * (size + 1));
	if (!s)
	{
		return (NULL);
	}
	while (i < (size + 1))
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
