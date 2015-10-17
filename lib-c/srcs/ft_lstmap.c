/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 10:44:45 by jhyun             #+#    #+#             */
/*   Updated: 2015/01/22 10:44:46 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst_new;
	t_list	*lst_head;

	lst_new = (t_list*)malloc(sizeof(t_list));
	if (!lst_new)
		return (NULL);
	lst_new = f(lst);
	lst_head = lst_new;
	while (lst->next)
	{
		lst = lst->next;
		lst_new->next = (t_list*)malloc(sizeof(t_list));
		if (!lst_new->next)
			return (NULL);
		lst_new->next = f(lst);
		lst_new = lst_new->next;
	}
	return (lst_head);
}
