/*
rules:
 we can't write an number 4 times
repait an number that mean sum as example III means 3 
LCM as example is not vaild because M is begger than L and C
if we have as example IV meains 5 -1
*/
int romanToInt(char* s) 
{
    int len = 0;
    int i = 0;
    int  result = 0;
    while (s[len])
        len++;
    int *arr = malloc(sizeof(int)*(len+1));
    while (i < len)
    {
        if(s[i] == 'I')
            arr[i] = 1;
        if(s[i] == 'V')
            arr[i] = 5;
        if(s[i] == 'X')
            arr[i] = 10;
        if(s[i] == 'L')
            arr[i] = 50;
        if(s[i] == 'C')
            arr[i] = 100;
        if(s[i] == 'D')
            arr[i] = 500;
        if(s[i] == 'M')
            arr[i] = 1000;
        i++;
    }
    arr[i] = 0;
    i = 0;
    while (i < len)
    {
        if(arr[i] < arr[i+1])
            result = result - arr[i];
        else
            result = result + arr[i];
        i++;
    }
    return(result);
}