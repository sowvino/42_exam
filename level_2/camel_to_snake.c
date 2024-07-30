/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selango <selango@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 06:51:20 by selango           #+#    #+#             */
/*   Updated: 2024/07/16 07:09:19 by selango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void camel_to_snake(char *str)
{
    int i;
    i =0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            write(1, "_",1);
            str[i] +=32;
        }
        write(1,&str[i],1);
        i++;
    }
}

int main(int argc,char ** argv)
{
    if(argc==2)
        camel_to_snake(argv[1]);
    write(1,"\n",1);
    return(0);
}
