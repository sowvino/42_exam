/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_sum_prime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selango <selango@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-22 14:57:00 by selango           #+#    #+#             */
/*   Updated: 2024-07-22 14:57:00 by selango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int res =0 ;
    int i;
    i = 0;
    while (str[i] !='\0')
    {
        res = res * 10;
        res = str[i] - '0';
        i++;
    }
    return(res);

}

int is_prime(int num)
{
    if(num <= 1)
    {
        return (0);
    }
    int i;
    i = 2;
    while (i * i <= num)
    {
        if(num % 2 == 0)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

void ft_putnbr(int n)
{
    if(n >= 10)
        ft_putnbr(n / 10);
    char res = n % 10 + '0';
    write (1, &res, 1);
}

int main(int argc,char ** argv)
{
    if(argc == 2)
    {
        int nbr = ft_atoi(argv[1]);
        printf("%d\n",nbr);
        int sum ;
        sum = 0;
        while (nbr  > 0)
        {
            if(is_prime (nbr))
            {
                sum += nbr;
            }
            nbr --;
        }
        ft_putnbr(sum);
    }
    else 
    {
        ft_putnbr(0);
    }
    write (1,"\n",1);
    return (0);
}