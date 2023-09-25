/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:47:02 by jcolera-          #+#    #+#             */
/*   Updated: 2023/09/25 19:10:31 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}	
/*
int	main()
{
	printf ("\ndevuelve a: %d", ft_isdigit('a'));
	printf ("\ndevuelve \\n: %d", ft_isdigit('\n'));
	//printf ("\ndevuelve ñ: %d", ft_isdigit('ñ'));
	printf ("\ndevuelve A: %d", ft_isdigit('A'));
	printf ("\ndevuelve 3: %d", ft_isdigit('3'));
}*/
