/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 10:44:10 by jhyun             #+#    #+#             */
/*   Updated: 2015/01/22 10:44:11 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*elem;
	t_list	*elem_next;

	elem = *alst;
	if (elem)
	{
		while (elem)
		{
			elem_next = elem->next;
			del(elem->content, elem->content_size);
			free(elem);
			elem = elem_next;
		}
		*alst = NULL;
	}
}
