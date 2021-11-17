/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:16:42 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/16 15:48:39 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char c;

	if (nb < 0)
	{
	write(fd, "-", 1);
        
        if (nb < -9)
            ft_putnbr_fd(nb / -10, fd);
        c = '0' - nb % 10;
	    write(fd, &c, 1);  
	}

	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		//ft_putchar((nbu % 10) + '0');
		nb = nb % 10;
	}
	if (nb >= 0)
	{
		c = '0';
		c = c + (nb % 10);
		write(fd, &c, 1);
	}
}