/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:45:10 by ekarabud          #+#    #+#             */
/*   Updated: 2023/10/18 13:59:50 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
        if(s[i] == c)
            return (char *)&s[i];
        i++;
	}
    return 0;
}

int	main(void)
{
    char *s = "zeyt\0eymen";
    char ch = 'n';
	printf("ORJİNAL : %s\n", strchr(s,ch));
    printf("BENİMKİ : %s\n", ft_strchr(s,ch));
}