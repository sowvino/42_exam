#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i;
    i =0;
    int length;
    length = 0;
    char temp;
    while(str[length] != '\0')
    {
        length++;
    }
    length -- ;
    while(i < length)
    {
        temp = str[i];
        str[i] = str[length];
        str[length] = temp;
        i++;
    }
    return(str);
}

int main()
{
	char str[] = "hello"; // Use an array instead of a pointer to allow modification
	printf("Original string: %s\n", str);
	printf("Reversed string: %s\n", ft_strrev(str));
	return 0;
}
