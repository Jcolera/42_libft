/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:28:33 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/13 13:13:44 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		result;
	int		sign;
	char	*str_aux;

	str_aux = (char *)str;
	while ((*str_aux >= 9 && *str_aux <= 13) || *str_aux == 32)
		str_aux++;
	i = 0;
	result = 0;
	sign = 1;
	if (str_aux[i] == '-' )
		sign = -1;
	if (str_aux[i] == '+' || str_aux[i] == '-')
		str_aux++;
	while (str_aux[i] >= '0' && str_aux[i] <= '9' )
	{
		result = (result * 10) + (str_aux[i] - '0');
		i++;
	}
	return (result * sign);
}
