/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:39:38 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/27 19:59:00 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst_aux;

	lst_aux = *lst;
	if (lst_aux != NULL)
	{
		while (lst_aux != NULL)
		{
			lst_aux = lst_aux->next;
			ft_lstdelone (*lst, del);
			*lst = lst_aux;
		}
	}
}
