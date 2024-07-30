/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selango <selango@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:43:34 by selango           #+#    #+#             */
/*   Updated: 2024/07/15 19:56:59 by selango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void search_replace(char *str,char a,char b)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == a)
        {
            str[i] = b;
            write(1, &str[i], 1);
        }
        else
            write(1,&str[i],1);
        i++;
    }
}

int main(int argc, char ** argv)
{
    int i;
    i = 0;
    if(argc == 4 && !argv[2][1] && !argv[3][1])
        search_replace(argv[1],argv[2][i],argv[3][i]);
    write(1,"\n",1);
    return(0);
}