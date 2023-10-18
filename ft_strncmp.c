/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:59:35 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/13 17:47:41 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*s1_aux;
	unsigned char	*s2_aux;

	s1_aux = (unsigned char *)s1;
	s2_aux = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (s1_aux[i] != '\0' && s2_aux[i] != '\0'))
	{
		if (s2_aux[i] != s1_aux[i])
			return (s1_aux[i] - s2_aux[i]);
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1_aux[i] - s2_aux[i]);
}
/*
int	main(void)
{
	int		result;
	char	cad1[] = {"6251\200"};
	char	cad2[] = {"6251\0"};

	result = strncmp(cad2, cad1, 5);
	printf("ha devuelto: %d\n", result);
	result = ft_strncmp(cad2, cad1, 5);
	printf("ha devuelto: %d\n", result);
	return (0);
}*/
