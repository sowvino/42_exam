#include <unistd.h>

void ft_putstr(char *c)
{
    int i;
    i =0;
    while (c[i] != '\0')
    {
        write(1,&c[i],1);
        i++;
    }
}

char wdmatch(char *s1, char *s2)
{
    int i ;
    i =0;
    int j;
    j =0;
    while (s2[j] != '\0')
    {
        if(s1[i] == s2[j])
        {
            i++;
        }
        j++;
    }
    return (s1[i] =='\0');
}
int main(int argc, char ** argv)
{
    if(argc == 3)
    {
        if(wdmatch(argv[1],argv[2]))
            ft_putstr(argv[1]);
    }
    write(1, "\n",1);
    return(0);
}