/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:59:35 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/11 20:59:41 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if (s2[i] != s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	int		result;
	char	cad1[] = {"625134"};
	char	cad2[] = {"62513"};

	result = strncmp(cad2, cad1, 5);
	printf("ha devuelto: %d\n", result);
	result = ft_strncmp(cad2, cad1, 5);
	printf("ha devuelto: %d\n", result);
	return (0);
}
*/
