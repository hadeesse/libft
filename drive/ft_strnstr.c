/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:09:23 by qde-vial          #+#    #+#             */
/*   Updated: 2013/11/20 14:09:28 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*c_s1;
	char	*c_s2;
	size_t		i;
	size_t		j;

	i = 0;
	c_s1 = (char *)s1;
	c_s2 = (char *)s2;
	if (s2 == NULL || s1 == NULL || s2[0] == '\0')
	{
		return (c_s1);
	}
	while (c_s1[i] != '\0' && i < n)
	{
		if (c_s1[i] == c_s2[0])
		{
			j = 0;
			while (c_s1[i + j] == c_s2[j] && c_s1[i + j] && (i + j) < n)
			{
				j++;
			}
			if (c_s2[j] == '\0')
				{
					return (&c_s1[i]);
				}
		}
		i++;
	}
	return (NULL);
}
