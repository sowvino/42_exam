/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selango <selango@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 07:11:27 by selango           #+#    #+#             */
/*   Updated: 2024/07/16 07:23:52 by selango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc,char **argv)
{
    if(argc == 4 && !argv[2][1] )
    {
        if(argv[2][0]=='+')
            printf("%d",(atoi(argv[1]) + atoi(argv[3])));
        if(argv[2][0]=='-')
            printf("%d",(atoi(argv[1]) - atoi(argv[3])));
        if(argv[2][0] == '*')
            printf("%d",(atoi(argv[1]) * atoi(argv[3])));
        if(argv[2][0] == '/')
            printf("%d",(atoi(argv[1]) / atoi(argv[3])));
        if(argv[2][0] == '%')
            printf("%d",(atoi(argv[1]) % atoi(argv[3])));
    }
    printf("\n");
    return(0);
}
