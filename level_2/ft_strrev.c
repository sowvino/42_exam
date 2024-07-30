#include <stdio.h>

char *ft_strrev(char *s)
{
    int i = 0;
    while (s[i] != '\0') // Find the length of the string
    {
        i++;
    }
    i--; // Set i to the last valid index

    int j = 0;
    char temp;
    while (j < i)
    {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        j++;
        i--;
    }
    return s;
}

int main()
{
	char str[] = "hello"; // Use an array instead of a pointer to allow modification
	printf("Original string: %s\n", str);
	printf("Reversed string: %s\n", ft_strrev(str));
	return 0;
}
