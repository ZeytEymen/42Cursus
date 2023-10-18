/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:23:57 by ekarabud          #+#    #+#             */
/*   Updated: 2023/10/18 18:02:55 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == c)
            return (&ptr[i]);
		i++;
	}
    return (0);
}

int	main(void)
{
	const char	*s;

	s = "zeyt eymen";
	printf("ORJ : %s\n", memchr(s, ' ', sizeof(s)));
	printf("BNM : %s\n", ft_memchr(s, ' ', sizeof(s)));
}

// char	*ft_strchr(const char *s, int c)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
//         if(s[i] == c)
//             return ((char *)&s[i]);
//         i++;
// 	}
//     return (0);
// }