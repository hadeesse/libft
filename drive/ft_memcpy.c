/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:47:49 by qde-vial          #+#    #+#             */
/*   Updated: 2013/11/19 13:48:29 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t i;
	char		*c_s1;
	const char	*c_s2;

	c_s1 = (char *)s1;
	c_s2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		c_s1[i] = c_s2[i];
		i++;
	}
	return ((char *)s1);
}
