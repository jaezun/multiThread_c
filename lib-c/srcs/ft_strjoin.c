/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:33:24 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/22 16:33:50 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*f;

	f = NULL;
	if (s1 && s2)
	{
		f = ft_strnew((ft_strlen(s1) + ft_strlen(s2) + 1));
		f = ft_strcat(f, s1);
		f = ft_strcat(f, s2);
	}
	return (f);
}
