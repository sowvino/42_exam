/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selango <selango@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:14:20 by selango           #+#    #+#             */
/*   Updated: 2024/07/17 16:26:51 by selango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    int i;
    i = 0;
   
    while(src[i] != '\0')
    {
        i++;
    }
    char *des;
    des =(char *) malloc(sizeof(char) * (i + 1));
    if(des != NULL)
    {
        i =0;
        while(src[i] != '\0')
        {
            des[i] = src[i];
            i++;
        }
        des[i] = '\0';
    }
    return (des);
}

int main()
{
    char * src = "hello";
    printf("%s\n", ft_strdup(src));
    return (0);
}
