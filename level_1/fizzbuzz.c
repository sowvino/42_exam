#include <unistd.h>

void ft_putnbr(int n)
{
    if(n > 9)
    {
        ft_putnbr(n / 10);
    }
    char res = n % 10 +'0';
    write(1,&res,1);
}

int main()
{
    int n =1;
    while (n <= 100)
    {
        if(n % 15 == 0)
        {
            write(1,"fizzbuzz",8);
            write(1,"\n",1);
        }
        else if(n % 3 == 0)
        {
            write(1,"fizz",4);
            write(1,"\n",1);
        }
        else if(n % 5 == 0)
        {
            write(1,"buzz",4);
            write(1,"\n",1);
        }
        else 
        {
            ft_putnbr(n);
            write(1,"\n",1);
        }
       n++;
    }
}