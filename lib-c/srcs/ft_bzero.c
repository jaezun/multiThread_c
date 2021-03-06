/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:56:57 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/20 19:57:05 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** sets the first n bytes to zero
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
