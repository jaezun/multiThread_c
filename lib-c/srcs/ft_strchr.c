/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:09:59 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/25 10:32:07 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		find;

	i = 0;
	find = 0;
	while (*((char*)s + i) != '\0' && *((char*)s + i) != (char)c)
		i++;
	if (*((char*)s + i) == (char)c)
		find = 1;
	else if (find == 0)
		return (NULL);
	else if (c == 0)
		return ((char*)s + ft_strlen(s));
	return ((char*)s + i);
}
