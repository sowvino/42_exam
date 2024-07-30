/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selango <selango@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:56:16 by selango           #+#    #+#             */
/*   Updated: 2024/07/15 19:15:50 by selango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rot_13(char *str)
{
    int i;
    i = 0;
    while(str[i]!='\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (str[i] - 'a'+ 13) % 26 + 'a';
            write(1,&str[i],1);
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
           str[i] = (str[i] - 'A'+ 13) % 26 + 'A';
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
        rot_13(argc[1]);
    write(1,"\n",1);
    return(0);
}
