/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:39:23 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/13 15:18:01 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*s_aux;

	i = 0;
	s_aux = (char *)s;
	while (i < (int) n)
	{
		if (s_aux[i] == (char)c)
			return ((void *) &s[i]);
		i++;
	}
	return (NULL);
}
