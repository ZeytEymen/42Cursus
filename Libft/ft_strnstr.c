/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:08:34 by ekarabud          #+#    #+#             */
/*   Updated: 2023/10/24 15:09:07 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t ndl;
// 	size_t location;

// 	if (!haystack || !needle || (int)len <= 0)
// 	{
// 		if (!haystack)
// 			return (0);
// 		else
// 			return ((char *)haystack);
// 	}
// 	ndl = ft_strlen(needle);
// 	location = 0;
// 	while (len && *haystack && location <= len)
// 	{
// 		if (!ft_strncmp(haystack, needle, ndl))
// 			return ((char *)haystack);
// 		len--;
// 		haystack++;
// 		location++;
// 	}
// 	return (0);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t ndl;
    size_t i;
    if (needle[0] == 0)
        return ((char *)haystack);
    ndl = ft_strlen(needle);
    i = 0;
    while (*haystack != '\0' && i < len - ndl)
    {
        if (ft_strncmp(haystack,needle,ndl) == 0)
            return ((char *)haystack);
        haystack++;
        i++;
    }
    return (0);   
}