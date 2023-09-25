/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:25:04 by jcolera-          #+#    #+#             */
/*   Updated: 2023/09/25 19:09:32 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}	
/*
int	main()
{
	printf ("\ndevuelve a: %d", ft_isalnum('a'));
	printf ("\ndevuelve \\n: %d", ft_isalnum('\n'));
	//printf ("\ndevuelve ñ: %d", ft_isalnum('ñ'));
	printf ("\ndevuelve A: %d", ft_isalnum('A'));
	printf ("\ndevuelve 3: %d", ft_isalnum('3'));
}*/
