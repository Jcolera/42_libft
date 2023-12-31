/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:33:59 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/13 17:45:56 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int					i;
	unsigned char		*dst2;
	const unsigned char	*src2;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst2 = dst;
	src2 = src;
	i = n - 1;
	if ((dst - src) >= (long) n || src2 > dst2)
		ft_memcpy(dst2, src2, n);
	else
	{
		while (i >= 0)
		{
			dst2[i] = src2[i];
			i--;
		}
	}
	return (dst);
}
