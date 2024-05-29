/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 03:35:36 by mintan            #+#    #+#             */
/*   Updated: 2024/05/30 03:35:36 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: Adds the node 'new' at the end of the list
   - lst: beginning of the list
   - new: address of a pointer to the node to be added to the list */

#include "libft.h"

void	ft_listadd_back(t_list **lst, t_list *new)
{
	t_list	*oldlast;
	t_list	*oldlastnext;

	if (lst && new)
	{
		oldlast = ft_lstlast(*lst);
		oldlastnext = oldlast->next;
		oldlast->next = new;
		new->next = oldlastnext;
	}
}
