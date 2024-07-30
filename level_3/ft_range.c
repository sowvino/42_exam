#include <stdlib.h>

int     *ft_range(int start, int end)
{
  int i = 0 ;
  int len;
  if(start > end)
    return(NULL);
  len  = (end - (start)) +1;
  int *range;
  range = (int *)malloc (sizeof(int) *(len));
  if(!range)
    return (NULL);
  while (end >= start)
  {
    range[i] = start;
    start++;
    i++;
  }
  return (range)
}