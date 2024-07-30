#include <unistd.h>
#include <stdio.h>

char *ft_strrev(char *s)
{
    int i =0 ;
    while(s[i] != '\0')
    {
        i++;
    }
    i--;
    int j =0;
    char temp;
    while(j < i)
    {
        temp = s[i];
        s[i]= s[j];
        s[j] = temp;
        j++;
        i--;
    }
    return (s);
}

int main ()
{
    char s[] = "hello";
    printf("%s\n",ft_strrev(s));
}