/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selango <selango@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 06:58:03 by selango           #+#    #+#             */
/*   Updated: 2024/07/16 07:09:33 by selango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void alpha_mirror(char *str)
{
    int i;
    i =0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = 'Z' - str[i] + 'A';
        else if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = 'z' - str[i] + 'a';
        write(1,&str[i],1);
        i++; 
    }
}
int main (int argc,char ** argv)
{
    if(argc == 2)
        alpha_mirror(argv[1]);
    write(1,"\n",1);
    return (0);
}
