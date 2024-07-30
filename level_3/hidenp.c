#include <unistd.h>

void  ft_hidenp(char *s1, char *s2)
{
    int i =0;
    int j;
    while(s1[i] != '\0' && s2[j] != '\0')
    {
        if(s1[i]==s2[j])
            i++;
        j++;   
    }
    if(s1[i] == '\0')
        write(1,"1",1);
    else 
        write(1,"0",1);    
}

int main(int argc , char ** argv)
{
    if(argc == 3)
    {
        ft_hidenp(argv[1],argv[2]);
    }
    write(1,"\n",1);
    return(0);
}