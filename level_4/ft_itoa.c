#include <stdlib.h>
#include <stdio.h>

int get_len(int n)
{
    int len;
    len =0;
    if(n < 0)
    {
        len++;
    }
    while (n !=0)
    {
        n = n / 10;
        len++;
    }
    return(len);
}

static long int abs_value(long int nbr)
{
    int n ;
    n = 1 ;
    if(nbr < 0)
    {
        n *= -nbr;
    }   
    else
    {
        n  *= nbr;
    }
    return (n);
}

char *ft_itoa(int n)
{
    unsigned int nbr;
    int sign;
    char *str;
    sign =0;
    int numlen;
    numlen = get_len(n);
    str = (char *)malloc(sizeof(char) * (numlen +1));
    if(n < 0)
    {
        sign =1;
    }
    str[numlen] = '\0';
    nbr = abs_value(n);
    while (numlen--)
    {
        str[numlen] = nbr % 10 +'0';
        nbr = nbr / 10;
    }
    if(sign)
    {
        *str = 45;
    }
    return(str);
}

int main()
{
    int n = -42;
    printf("%s\n", ft_itoa(n));
}