/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:16:48 by ekarabud          #+#    #+#             */
/*   Updated: 2023/10/18 16:03:55 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

int main()
{
    const char *s1 = "zeyteymen"; const char *s2 = "zeyt aymen";
    printf("ORJ : %d\n",strncmp(s1,s2,0));
    printf("BNM : %d\n",ft_strncmp(s1,s2,0));
}