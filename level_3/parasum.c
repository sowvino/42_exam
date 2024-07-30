#include <unistd.h>

char ft_putnbr(int n)
{
    if(n >=10)
        ft_putnbr(n/10);
    char res = n % 10 + '0';
    write(1,&res,1);
}

int main(int argc,char ** argv)
{
    (void) argv;
    ft_putnbr(argc -1);
    write(1,"\n",1);
    return(0);
}