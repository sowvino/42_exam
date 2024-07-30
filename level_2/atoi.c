/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selango <selango@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 07:29:52 by selango           #+#    #+#             */
/*   Updated: 2024/07/16 07:47:49 by selango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int result;
    int sign;
    int i;
    
    i=0;
    result = 0;
    sign = 1;
    
    while(str[i]== 32 || (str[i]>= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-')
        sign = -1;
    if(str[i] == '-' || str[i] == '+')
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return(sign * result);    
}

int main(int argc,char ** argv)
{
    if(argc == 2)
    {
        ft_atoi(argv[1]);
        printf("%d\n", ft_atoi(argv[1]));
        printf("%d\n",atoi(argv[1]));
    }
    else
    {
       printf("\n"); 
    }
    return(0); 
}
