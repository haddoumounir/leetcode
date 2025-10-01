#include <string.h>

void reverseString(char* s, int sSize) 
{
    char *temp = malloc(sSize);
    memcpy(temp,s,sSize);
    int i = 0;
    while(i < sSize)
    {
        s[i] = temp[sSize-i-1];
        i++;
    }
}