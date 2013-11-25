/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:52:11 by qde-vial          #+#    #+#             */
/*   Updated: 2013/11/19 13:52:13 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	 i;
	char	*c_s;

	c_s = (char *)s;
	i = 0;
	while (c_s[i] != c && i < n)
	{
		i++;
	}
	if (c_s[i] == c && i != n)
	{
		return (&c_s[i]);
	}
	else
	{
		return (NULL);
	}
}
