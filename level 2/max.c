#include <stdio.h>


int max(int *tab, unsigned int len)
{
    if(len == 0)
        return(0);
    int i;
    int result;
    i =0;
    result = tab[i];
    while(i < len)
    {
        if(result < tab[i])
            result = tab[i];
        i++;
    }
    return(result);
}
int main()
{
    int tab[4] = {2,5,9,8};
    unsigned int len = 4;
    printf("%d\n", max(tab,len));
    return(0);
}