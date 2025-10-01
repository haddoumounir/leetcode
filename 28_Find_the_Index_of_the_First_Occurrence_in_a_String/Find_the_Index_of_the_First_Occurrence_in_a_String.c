int strStr(char* haystack, char* needle) 
{
    int i = 0;
    int j = 0;

    while(haystack[i])
    {
        if(haystack[i] ==needle[0])
        {
            j = 0;
            while (needle[j] && haystack[i+j] == needle[j])
            {
                j++;
            }
            if(!needle[j])
                return(i);
        }
        i++;
    }
    return(-1);
}