/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 15:34:14 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/25 15:59:57 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** allocates and returns a new memory area. It shall be initialized by 0.
** by failure return NULL.
*/

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if (!size)
		return (NULL);
	ptr = (void*)malloc(size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size);
	return (ptr);
}
