/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:40:57 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/14 21:32:28 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (!s1[0])
		return (ft_strdup(""));
	while (*s1 != 0 && ft_strchr(set, *s1) != NULL)
		s1++;
	i = ft_strlen(s1);
	while (i >= 0 && ft_strchr(set, s1[i - 1]) != NULL)
		i--;
	return (ft_substr(s1, 0, i));
}
