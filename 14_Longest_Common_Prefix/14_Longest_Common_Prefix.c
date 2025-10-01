#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int ft_(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s2[i])
    {
        if(s1[i] == s2[i])
            i++;
        else
            break;
    }
    return(i);
}
char* longestCommonPrefix(char** strs, int strsSize) 
{
    int i = 0;
    int max_len = INT_MAX;
    int val = 0;
    while (i < strsSize)
    {
        val = ft_(strs[0],strs[i]); // i think i need some sleep after this
        if(val < max_len)
            max_len = val;
        i++;
    }
    char *result = malloc(max_len+1);
    i = 0;
    while (i < max_len)
    {
        result[i] = strs[0][i];
        i++;
    }
    result[i] = 0;
    return(result);
}