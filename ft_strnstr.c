/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:24:02 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/09 20:25:40 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int				i;
	unsigned char	*hay_aux;
	unsigned char	*need_aux;

	hay_aux = (unsigned char *)haystack;
	need_aux = (unsigned char *)needle;
	i = 0;
	while ((i < (int)len) && (hay_aux[i] != 0))
	{
		if (ft_memcmp (&hay_aux[i], need_aux, ft_strlen((char *)need_aux)) == 0)
			return ((char *) &hay_aux[i]);
		i++;
	}
	return (NULL);
}
