/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:51:49 by jcolera-          #+#    #+#             */
/*   Updated: 2023/09/25 19:06:19 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "string.h"
#include "libft.h"

int	ft_isascii( int c )
{
	if ((c >= 0) && (c <= 127))
		return (1);
	return (0);
}	
/*
int	main()
{
	printf ("\ndevuelve a: %d", ft_isascii('a'));
	printf ("\ndevuelve \\n: %d", ft_isascii('\n'));
	printf ("\ndevuelve 130: %d", ft_isascii(130));
	printf ("\ndevuelve -1: %d", ft_isascii(-1));
	printf ("\ndevuelve 3: %d", ft_isascii('3'));
}*/
