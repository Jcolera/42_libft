/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:37:36 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/09 19:23:36 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*s1_aux;
	unsigned char	*s2_aux;

	i = 0;
	s1_aux = (unsigned char *) s1;
	s2_aux = (unsigned char *) s2;
	while (i < (int) n)
	{
		if (s2_aux[i] != s1_aux[i])
			return (s1_aux[i] - s2_aux[i]);
		i++;
	}
	return (0);
}
