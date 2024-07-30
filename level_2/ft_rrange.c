#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i =0;
    int *temp;
    int len;
    if(start >end)
        return(NULL);
    len = (end - (start)) + 1;
    temp = (int *) malloc(sizeof(int) * (len));
    if(!temp)
        return(NULL);
    while (start <= end)
    {
        temp[i] = end;
        end--;
        i++;
    }
    return(temp);

}