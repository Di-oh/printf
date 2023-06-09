/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:21:09 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/30 15:37:18 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*list;

	list = malloc(sizeof(struct s_list));
	if (list == NULL)
		return (list);
	list -> content = content;
	list -> next = NULL;
	return (list);
}
