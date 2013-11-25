/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:00:57 by qde-vial          #+#    #+#             */
/*   Updated: 2013/11/19 14:00:59 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if(n < 0)
	{
		ft_putchar_fd(fd, '-');
		ft_putnbr_fd(n * (-1), fd);
	}
	else if(n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if(n < 10)
	{
		ft_putchar_fd(fd, n + 48);
	}
}
