/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:53:27 by ekarabud          #+#    #+#             */
/*   Updated: 2023/10/27 21:08:22 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *trimmed;
    size_t seti;
    int j;
    int i;

    seti = ft_strlen(set);
    j = 0;
    i = 0;
    trimmed = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
    if (!trimmed)
        return (NULL);
    while (s1[i])
    {
        if (ft_strncmp(&s1[i],set,seti) == 0)
        {
            i+= seti;
            continue;
        }
        trimmed[j] = s1[i];
        j++;
        i++;
    }
    trimmed[j] = '\0'; 
    return (trimmed);
}