/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:34:27 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/14 20:30:55 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	len_s;

	len_s = ft_strlen (s);
	if (s == NULL || start > len_s)
		return (ft_strdup(""));
	if ((start + len) > len_s)
		len = len_s - start;
	ptr = malloc (len + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, (char *) &s[start], len + 1);
	return (ptr);
}
