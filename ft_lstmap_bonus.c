/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:50:36 by clovella          #+#    #+#             */
/*   Updated: 2021/11/16 04:50:36 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
	void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*cur;

	if (!lst || !f)
		return (ft_lstnew(0));
	new_lst = ft_lstnew(f(lst->content));
	cur = new_lst;
	lst = lst->next;
	while (lst)
	{
		if (!cur)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		cur->next = ft_lstnew(f(lst->content));
		lst = lst->next;
		cur = cur->next;
	}
	return (new_lst);
}
