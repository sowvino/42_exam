#include <unistd.h>

void write_number(int num)
{
    char str[10]="0123456789";
    if(num > 9)
        write_number(num /10);
    write(1, &str[num % 10] ,1);
}
int main()
{
    int i;
    i =1;
    while(i <=100)
    {
        if(i % 15 == 0)
        {
            write(1, "fizzbuzz",8);
        }
        else if(i % 5 == 0)
        {
            write(1, "buzz",4);
        }
        else if(i % 3 == 0)
        {
            write(1,"fizz",4);
        }
        else
            write_number(i);
        i++;
        write(1,"\n",1);
    }
}