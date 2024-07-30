/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_one.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selango <selango@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:26:24 by selango           #+#    #+#             */
/*   Updated: 2024/07/15 19:39:49 by selango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rot_one(char *str)
{
    int i;
    i = 0;
    while(str[i]!='\0')
    {
        if(str[i] >= 'a' && str[i] <= 'y')
        {
            str[i] = (str[i] +1);
            write(1,&str[i],1);
        }
        else if(str[i] >= 'A' && str[i] <= 'Y')
        {
           str[i] = (str[i] + 1);
           write(1,&str[i],1); 
        }
        else if(str[i] == 'z')
        {
            str[i] = 'a';
            write(1,&str[i],1);
        }
        else if(str[i] == 'Z')
        {
            str[i] = 'A';
            write(1,&str[i],1);    
        }
        else
            write(1,&str[i],1);
        i++;
    }
}

int main(int argv,char ** argc)
{
    if(argv==2)
    {
        rot_one(argc[1]);
    }
    write(1, "\n",1);
    return(0);
}