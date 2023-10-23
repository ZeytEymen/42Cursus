/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:08:34 by ekarabud          #+#    #+#             */
/*   Updated: 2023/10/23 16:52:12 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		lc;
	size_t	ndl;

	if (!haystack || !needle)
	{
		if (!haystack)
			return (0);
		else
			return ((char *)haystack);
	}
	ndl = ft_strlen(needle);
	lc = 0;
	while (len >= 0 && *haystack && lc <= (int)len)
	{
		if (!ft_strncmp(haystack, needle, ndl))
			return ((char *)haystack);
		len--;
		haystack++;
		lc++;
	}
	return (0);
}
