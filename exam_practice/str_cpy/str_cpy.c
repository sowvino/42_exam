#include <stdio.h>
char    *ft_strcpy(char *s1, char *s2)
{
    int i;
    i =0;
    while(s2[i]!= '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] ='\0';
    return(s1);
}
int main()
{
    char a[20];
    char *b ="hello world";
    char *res = ft_strcpy(a,b);
    printf("%s",res);
}