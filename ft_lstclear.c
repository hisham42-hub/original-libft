/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/24 16:06:36 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/24 17:33:58 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_n;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next_n = current->next;
		del(current->content);
		free(current);
		current = next_n;
	}
	*lst = NULL;
}
