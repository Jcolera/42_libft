/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:24:02 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/13 18:47:09 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;

	i = 0;
	if (ft_strlen((char *)needle) == 0)
		return ((char *)haystack);
	while ((haystack[i] != 0) && (i <= (len - ft_strlen((char *)needle))))
	{
		if (len < (size_t) ft_strlen((char *)needle) || len == 0)
			return (NULL);
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (j < (size_t) ft_strlen((char *)needle))
			{
				if (haystack[i + j] != needle[j])
					break ;
				j++;
			}
			if (j == (size_t) ft_strlen((char *)needle))
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (NULL);
}
