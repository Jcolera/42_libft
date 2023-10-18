/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:59:51 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/14 21:27:59 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	n_aux;

	n_aux = n;
	if (n_aux < 0)
	{
		ft_putchar_fd('-', fd);
		n_aux *= -1;
	}
	if (n_aux < 10)
		ft_putchar_fd(n_aux + '0', fd);
	else
	{
		ft_putnbr_fd (n_aux / 10, fd);
		ft_putchar_fd((n_aux % 10) + '0', fd);
	}
}
