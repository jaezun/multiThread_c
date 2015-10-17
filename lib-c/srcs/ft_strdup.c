/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:11:22 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/20 20:11:23 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*strcopy;

	i = 0;
	strcopy = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[i] != '\0')
	{
		strcopy[i] = src[i];
		i++;
	}
	strcopy[i] = '\0';
	return (strcopy);
}
