/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:04:42 by ekarabud          #+#    #+#             */
/*   Updated: 2023/10/27 15:21:51 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	while (src[i] && i + 1 < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (dstsize)
		dst[j] = '\0';
	
	return (ft_strlen(dst));
}