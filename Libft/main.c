/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:21:50 by ekarabud          #+#    #+#             */
/*   Updated: 2023/10/21 19:23:24 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*array;

	array = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		array[i] = (unsigned char)c;
		i++;
	}
	return (array);
}

void	ft_bzero(void *s, size_t n)
{
	while ((*(unsigned char *)s) && n)
	{
		(*(unsigned char *)s) = 0;
		s++;
		n--;
	}
}

// void	*ft_memcpy(void *dst, const void *src, size_t n)
// {
// 	while ((*(unsigned char *)dst) && (*(unsigned char *)src) && n)
// 	{
// 		(*(unsigned char *)dst) = (*(unsigned char *)src);
// 		dst++;
// 		src++;
// 	}
// 	*(unsigned char *)dst = 0;
// 	return ((unsigned char *)dst);
// }

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (dst == src || !n)
	{
		return (dst);
	}
	
	while (i < n)
	{
		(*(unsigned char *)dst) = (*(unsigned char *)src);
		dst++;
		src++;
		i++;
	}
//	*(unsigned char *)dst = 0;
	return ((unsigned char *)dst);
}

int	main(void)
{
	char mem[40];
	if (mem != ft_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14))
		write(1, "dest's adress was not returned\n", 31);
	write(1, mem, 30);

	// char source[] = "Bu bir ornek.";
	// char destination[] = "eymen karabudakaaaa";

	// printf("veri source: %s\n", source);
	// printf("veri destination: %s\n", destination);
	// // source dizisini destination dizisine kopyala
	// ft_memcpy(destination, source, strlen(source) + 1);
	// printf("veri source: %s\n", source);
	// printf("veri destination: %s\n", destination);

	// char s[10];
	// printf("bzero öncesi : %s\n",s);
	// ft_bzero(s, 6);
	// printf("bzero sonrası : %s\n",s);
	// int s[23];
	// char str[] = "ZeytEymenKarabudak";
	// memset(str, 'X', 4);
	// memset(s + 1, 1, 2);

	// int s1[23];
	// char str1[] = "ZeytEymenKarabudak";
	// ft_memset(str1, 'X', 4);
	// ft_memset(s1 + 1, 1, 2);
	// printf("ORJ : %d\n", s[1]);
	// printf("ORJ : %s\n", str);
	// printf("BNM : %d\n", s1[1]);
	// printf("BNM : %s\n", str1);
	// printf("BNM : %s\n", ft_memset(s, ' ', sizeof(s)));
}