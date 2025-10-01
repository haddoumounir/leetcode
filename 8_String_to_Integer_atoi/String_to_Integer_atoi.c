int myAtoi(char* s) 
{
    int i = 0;
    int val = 1;
    long  result = 0;
    while (s[i] && s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
        i++;
    if(s[i] == '+' || s[i] == '-')
    {
        if(s[i] == '-')
            val = -val;
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9')
    {
        result = result*10+s[i]-'0';
        if(val*result < -2147483647 -1)
            return(-2147483647 -1);
        if(val*result > 2147483647)
            return(2147483647);
        i++;
    }
    return(val*result);
}