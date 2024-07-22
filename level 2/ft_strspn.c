#include <stdio.h>
#include <string.h>

size_t ft_strspn(const char *s ,const char *accept)
{
    size_t i = 0;
    size_t j;
    while(s[i] != '\0')
    {
        j = 0;
        while(accept[j] != '\0')
        {
            if(s[i] == accept[j])
            {
                break;
            }
            j++;
        }
        if(accept[j]== '\0')
        {
            return(i);
        }
        i++;
    }
    return(i);
}

int main()
{
    char *s ="abcd";
    char *a ="abcd";
    printf("%zu\n", ft_strspn(s,a));
    printf("%zu\n", strspn(s,a));
    return(0);
}
