/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:59:38 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/13 19:22:37 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*ptr;

	len = ft_strlen (s1);
	ptr = ft_calloc (len + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy (ptr, s1, len);
	return (ptr);
}
