/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:49:45 by qde-vial          #+#    #+#             */
/*   Updated: 2013/11/19 13:49:50 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char *temp;
	char *c_s1;
	const char *c_s2;

	c_s1 = (char *)s1;
	c_s2 = (char *)s2;
	i = 0;
	temp = malloc(sizeof(char *) * n);
	while(i < n)
	{
		temp[i] = c_s2[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		c_s1[i] = temp[i];
		i++;
	}
	return (s1);
}
