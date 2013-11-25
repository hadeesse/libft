/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                       :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:49:10 by qde-vial          #+#    #+#             */
/*   Updated: 2013/11/19 13:49:12 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*s;

	if(!size)
	{
		return (NULL);
	}
	s = malloc(sizeof(*s) * size);
	if (!s)
	{
		return (NULL);
	}
	return (s);
}
