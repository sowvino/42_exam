#include <unistd.h>

int ft_atoi(char *str)
{
    int res = 0;
    while(*str)
    {
        res = res * 10;
        res  = res + *str++ -'0';
    }
    return (res);
}

void print_hex(int n)
{
    char hex[] = "0123456789abcdef";
    if(n >= 16)
        print_hex(n /16);
    write(1, &hex[n % 16],1);
}

int main(int argc, char ** argv)
{
    if(argc ==2)
    {
         int nbr = ft_atoi(argv[1]);
         print_hex(nbr);
    }
       
    write(1,"\n",1);
    return(0);
}