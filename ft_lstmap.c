/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavina <msavina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:14:26 by msavina           #+#    #+#             */
/*   Updated: 2023/10/25 16:42:58 by msavina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief takes a input linked list, applies a transformaion function 'f' to
// each element, and creates a new linked list with the transformed elements
/// @param lst the original linked list
/// @param f function to apply
/// @param del deleten function to apply if needed
/// @return the newly created linked list, which contains transformed
// elements from the original list
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_list;

	new = 0;
	new_list = 0;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new = ft_calloc(1, sizeof(t_list));
		if (!new)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new->content = f(lst->content);
		new->next = NULL;
		if (!new_list)
			new_list = new;
		else
			ft_lstadd_back(&new_list, new);
		lst = lst->next;
	}
	return (new_list);
}
