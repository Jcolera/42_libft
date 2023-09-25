/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:32:55 by jcolera-          #+#    #+#             */
/*   Updated: 2023/09/25 19:08:29 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}	
/*
int	main()
{
	printf ("\ndevuelve a: %d", ft_isalpha('a'));
	printf ("\ndevuelve \\n: %d", ft_isalpha('\n'));
	//printf ("\ndevuelve ñ: %d", ft_isalpha('ñ'));
	printf ("\ndevuelve A: %d", ft_isalpha('A'));
	printf ("\ndevuelve 3: %d", ft_isalpha('3'));
}*/
