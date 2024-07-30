/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selango <selango@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:30:52 by selango           #+#    #+#             */
/*   Updated: 2024/07/15 18:42:37 by selango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar_n(char a,int c)
{
    while(c > 0)
    {
        write(1,&a,1);
        c--;
    }
}

void repeat_alpha(char *str)
{
    int i;
    i = 0;
    while(str[i]!='\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            putchar_n(str[i],str[i]+1-'a');
        else if(str[i] >= 'A' && str[i] <= 'Z')
            putchar_n(str[i],str[i]+1-'A');
        else
            write(1,&str[i],1);
        i++;
    }  
}

int main(int argc,char **argv)
{
    if(argc==2)
    {
        repeat_alpha(argv[1]);
    }
    write(1,"\n",1);
    return(0);
}
