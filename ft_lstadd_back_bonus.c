/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:45:36 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/20 21:03:28 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_aux;

	lst_aux = *lst;
	lst_aux = ft_lstlast(lst_aux);
	if (lst_aux == NULL)
		*lst = new;
	else
		lst_aux->next = new;
}
