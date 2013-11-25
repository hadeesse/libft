/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:59:41 by qde-vial          #+#    #+#             */
/*   Updated: 2013/11/19 13:59:45 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*c_s;

	c_s = (char *)s;
	i = 0;
	while (c_s[i] != '\0')
	{
		if (c_s[i] == c)
		{
			return (&c_s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return (&c_s[i]);
	}
	return (NULL);
}
