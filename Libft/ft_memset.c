/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:03:31 by ekarabud          #+#    #+#             */
/*   Updated: 2023/10/18 18:13:39 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memset(void *b, int c, size_t len)
{
    return (0);
}

int	main(void)
{
	int	s[23];
	
	printf("ORJ : %d\n", memset(&s[0], 2, sizeof(int)));
	//printf("BNM : %s\n", ft_memset(s, ' ', sizeof(s)));
}