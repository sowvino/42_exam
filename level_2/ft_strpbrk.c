/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selango <selango@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:28:10 by selango           #+#    #+#             */
/*   Updated: 2024/07/17 16:39:17 by selango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

 char *ft_strpbrk(const char *s, const char *accept)
 {
    int i;
    int j;
    i = 0;
    j = 0;
    while(s[i] !='\0')
    {
        while(accept[j] != '\0')
        {
            if(s[i] == accept[j])
                return((char*)s);
            j++;
        }
        i++;
    }
    return(NULL);
 }

 int main()
 {
    const char *s1 = "hello";
    const char *accept ="hello";
    printf("%s\n", ft_strpbrk(s1,accept));
    printf("%s\n", strpbrk(s1,accept));
    return(0);
 }