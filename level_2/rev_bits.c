#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char res;
    while(i > 0)
    {
        res = res * 2 + (octet % 2);
        octet = octet / 2;
        i--;       
    }
    return(res);
}