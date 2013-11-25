/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:59:58 by qde-vial          #+#    #+#             */
/*   Updated: 2013/11/19 14:00:02 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strstr(const char *s1,const char *s2)
{
	char	*c_s1;
	char	*c_s2;
	int		i;
	int		j;

	i = 0;
	c_s1 = (char *)s1;
	c_s2 = (char *)s2;
	if (s2 == NULL || s1 == NULL || s2[0] == '\0')
	{
		return (c_s1);
	}
	while (c_s1[i] != '\0')
	{
		if (c_s1[i] == c_s2[0])
		{
			j = 0;
			while (c_s1[i + j] == c_s2[j] && c_s1[i + j])
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
