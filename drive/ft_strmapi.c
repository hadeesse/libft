/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:02:58 by qde-vial          #+#    #+#             */
/*   Updated: 2013/11/19 14:02:59 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char	*f_s;

	i = 0;
	f_s = (char *)malloc(sizeof(char) * ft_strlen(s));
	if(!s)
	{
		return (0);
	}
	while (s[i] != '\0')
	{
		f_s[i] = (*f)(i, s[i]);
		i++;
	}
	return (&f_s[0]);
}
