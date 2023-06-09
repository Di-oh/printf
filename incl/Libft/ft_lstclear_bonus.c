/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:18:50 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/30 15:34:53 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nodo;

	while (*lst)
	{
		nodo = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nodo;
	}
	free(*lst);
}
