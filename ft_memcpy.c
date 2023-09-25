/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:39:37 by jcolera-          #+#    #+#             */
/*   Updated: 2023/09/25 22:24:03 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	void *dst2;
	void *src2;

	dst2 = dst;
	src2 = src;
	i = 0;
	while (i < n)
	{
		dst2[i] = (void *)src[i];
		i++;
	}
	return (dst);
}
