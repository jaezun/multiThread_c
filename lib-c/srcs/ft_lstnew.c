/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 10:45:22 by jhyun             #+#    #+#             */
/*   Updated: 2015/01/22 10:45:23 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** create a new linked list
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*elem;
	void	*i;

	i = (void*)ft_memalloc(content_size + 1);
	if (content == NULL)
	{
		i = NULL;
		content_size = 0;
	}
	else
		i = ft_memcpy(i, content, content_size);
	elem = (t_list*)malloc(sizeof(t_list) * content_size);
	if (!elem)
		return (NULL);
	else
	{
		elem->content = i;
		elem->content_size = content_size;
		elem->next = NULL;
	}
	return (elem);
}
