/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:14:34 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/20 20:14:34 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	int		i;

	i = 0;
	temp = NULL;
	while (*((char*)s + i) != '\0')
	{
		if (*((char*)s + i) == (char)c)
			temp = ((char*)s + i);
		i++;
	}
	if (c == 0)
		temp = ((char*)s + ft_strlen(s));
	return (temp);
}
