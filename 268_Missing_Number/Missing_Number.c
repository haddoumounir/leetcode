#include <limits.h>

int missingNumber(int* nums, int numsSize) 
{    
    int i = -1;
    int arr[10000] = {0};
    while (++i < numsSize)
        arr[nums[i]] = 1;
    i = 0;
    while (arr[i])
        i++;
    return(i);
    
}