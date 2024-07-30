#include <stdio.h>
#include <string.h>

size_t ft_strcspn(const char *s ,const char *reject)
{
    size_t i = 0;
    size_t j;
    while(s[i] != '\0')
    {
        j = 0;
        while(reject[j] != '\0')
        {
            if(s[i] == reject[j])
            {
               return(i);
            }
            j++;
        }
        i++;
    }
    return(i);
}

int main()
{
    char *s ="abcd";
    char *a ="hbcd";
    printf("%zu\n", ft_strcspn(s,a));
    printf("%zu\n", strcspn(s,a));
    return(0);
}