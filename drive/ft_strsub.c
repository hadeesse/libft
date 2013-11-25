/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:47:14 by qde-vial          #+#    #+#             */
/*   Updated: 2013/11/19 13:47:20 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*t_s;
	int		i;

	i = 0;
	t_s = (char *)malloc(sizeof(char) * (len + 1));
	if (len == 0 || !t_s)
	{
		return (NULL);
	}
	while (len > 0)
	{
		t_s[i] = s[start + i];
		i++;
		len--;
	}
	return (t_s);
}
