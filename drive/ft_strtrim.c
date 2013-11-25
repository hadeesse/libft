/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:47:14 by qde-vial          #+#    #+#             */
/*   Updated: 2013/11/19 13:47:20 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str_debut;
	char	*str_fin;
	int		i;
	int 	j;
	int		len;

	len = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	j = i;
	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	i = 0;
	str_debut = (char *)malloc(sizeof(char) * len);
	if (!str_debut)
	{
		return (NULL);
	}
	while (s[j + i] != '\0')
	{
		str_debut[i] = s[j + i];
		i++;
	}
	str_debut[i] = '\0';
	while (str_debut[len - 1] == ' ' || str_debut[len - 1] == '\n' || str_debut[len - 1] == '\t')
	{
		len--;
	}
	str_fin = (char *)malloc(sizeof(char) * (len + 1));
	if (!str_fin)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		str_fin[i] = str_debut[i];
		i++;
	}
	str_fin[i] = '\0';
	return (str_fin);
}
