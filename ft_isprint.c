/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:14:20 by jcolera-          #+#    #+#             */
/*   Updated: 2023/09/25 19:24:53 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "string.h"
#include "libft.h"

int	ft_isprint( int c )
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}	
/*
int	main()
{
	printf ("\ndevuelve a: %d", ft_isprint('a'));
	printf ("\ndevuelve \\n: %d", ft_isprint('\n'));
	printf ("\ndevuelve 130: %d", ft_isprint(130));
	printf ("\ndevuelve -1: %d", ft_isprint(-1));
	printf ("\ndevuelve 3: %d", ft_isprint('3'));
}*/
