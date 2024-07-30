#include <stdio.h>

char to_lower(char c)
{
    if(c >= 'A' && c <= 'Z' )
    {
        return (c +=32);
    }
    return(c);
}
int get_digit (char c, int base)
{
    int max_digit;
    if(base <= 10)
    {
        max_digit = base + '0';

    }
    else 
    {
        max_digit = base - 10 + 'a';
    }
    if(c >= '0' && c<= '9' && c<= max_digit)
    {
        return(c - '0');
    }
    else if(c >= 'a' && c<= 'f' && c <= max_digit)
    {
        return(10 + c -'a');
    }
    else 
    {
        return(-1);
    }

}

int	ft_atoi_base(const char *str, int str_base)
{
    int sign =1;
    int res = 0;
    int digit ;

    if(*str == '-')
    {
        sign =-1;
        str++;
    }
    while((digit = get_digit((to_lower(*str)),str_base)) >=0)
    {
        res = res * str_base;
        res =res +(digit * sign);
        str++;
    }
    return (res);
}


int main() {
    const char *num_str;
    int base;
    int result;

    // Test case 1: Convert a hexadecimal number
    num_str = "1A3";
    base = 16;
    result = ft_atoi_base(num_str, base);
    printf("The number %s in base %d is %d in decimal.\n", num_str, base, result);

    // Test case 2: Convert a binary number
    num_str = "1101";
    base = 2;
    result = ft_atoi_base(num_str, base);
    printf("The number %s in base %d is %d in decimal.\n", num_str, base, result);

    // Test case 3: Convert an octal number
    num_str = "755";
    base = 8;
    result = ft_atoi_base(num_str, base);
    printf("The number %s in base %d is %d in decimal.\n", num_str, base, result);

    // Test case 4: Convert a decimal number
    num_str = "-123";
    base = 10;
    result = ft_atoi_base(num_str, base);
    printf("The number %s in base %d is %d in decimal.\n", num_str, base, result);

    return 0;
}