/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selango <selango@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:58:02 by selango           #+#    #+#             */
/*   Updated: 2024/07/15 20:04:35 by selango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ulstr(char * str)
{
    int i;
    i=0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
             str[i] = str[i] - 32;
             write(1, &str[i], 1);    
        }
           
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] +32;
            write(1, &str[i], 1);
        }    
        else 
            write(1,&str[i],1);
        i++;
    }
}
int main(int argc, char ** argv)
{
    if(argc == 2)
    {
        ulstr(argv[1]);
    }
    write(1,"\n",1);
    return(0);
}