#include <stdio.h>
#include <unistd.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    int n;
    if(a== 0 || b == 0)
        return (0);
    if(a > b)
    {
        n = a;
    }
    else
    {
        n =b;
    }
    while (1)
    {
        if(n % a == 0 && n % b == 0)
        {
            return(n);
        }
        n++;
    }
 }

unsigned int ft_atoi(char *str)
{
    int i;
    i =0;
    int res = 0;
    while (str[i] != '\0')
    {
        res = res * 10 ;
        res = str[i] - '0';
        i++;
    }
    return(res);
}

 int main(int argc,char ** argv)
 {
    if(argc == 3)
    {
       unsigned res = lcm(ft_atoi(argv[1]),ft_atoi(argv[2]));
       printf("%u\n",res);
    }
    else
    {
        write(1,"\n",1);
    }
    return (0);
    
 }


