/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:45:10 by ekarabud          #+#    #+#             */
/*   Updated: 2023/10/21 20:26:03 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// char	*ft_strchr(const char *s, int c)
// {
// 	int i;

// 	i = 0;
//     strlen(s);
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 			return ((char *)&s[i]);
// 		i++;
// 	}
// 	return (NULL);
// }
char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
    int a = strlen(s);
	while (i < a)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}


int main()
{
    char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
    printf("%s\n",src);
 	char *d1 = strchr(src, '\0');
 	char *d2 = ft_strchr(src, '\0');
    if (d1 == d2)
    {
        printf("SUCCESS");
    }
    printf("%s\n", d1);
    printf("%s\n", d2); 
}