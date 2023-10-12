/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:31:31 by jcolera-          #+#    #+#             */
/*   Updated: 2023/09/30 15:13:45 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*c_aux;

	c_aux = (char *)b;
	i = 0;
	while (i < (int)len)
	{
		*(c_aux + i) = (unsigned char) c;
		i++;
	}
	return (b);
}
