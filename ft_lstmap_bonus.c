/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolera- <jcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:04:59 by jcolera-          #+#    #+#             */
/*   Updated: 2023/10/27 19:53:22 by jcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_aux;
	t_list	*lst_new;

	lst_aux = NULL;
	while (lst != NULL)
	{
		lst_new = ft_lstnew ((*f)((void *)lst->content));
		if (lst_new == NULL)
		{
			ft_lstclear (&lst_aux, del);
			return (NULL);
		}
		ft_lstadd_back (&lst_aux, lst_new);
		lst = lst->next;
	}
	return (lst_aux);
}	
