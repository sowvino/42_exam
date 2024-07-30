#include <unistd.h>

int comp(char *s,char c, int index)
{
    int i;
    i =0;
    while (i < index)
    {
        if(s[i]== c)
        {
            return(1);
        }
        i++;
    }
    return(0);
}

void ft_union(char *s1,char *s2)
{
    int i =0;
    int j;
    while(s1[i] != '\0')
    {
        if(comp(s1,s1[i],i) == 0)
        {
            write(1,&s1[i],1);
        }
        i++;
    }
    j =0;
    while(s2[j])
    {
        if((comp(s1,s2[j],i) == 0) && (comp(s2,s2[j],j) == 0))
        {
            write(1,&s2[j],1);   
        }
       j++;           
    }
}

int main(int argc,char ** argv)
{
    if(argc == 3)
    {
        ft_union(argv[1],argv[2]);
    }
    write(1,"\n",1);
    return(0);
}
