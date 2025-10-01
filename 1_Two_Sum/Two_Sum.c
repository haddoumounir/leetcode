/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int i = 0;
    
    int *arr = malloc(sizeof(int) * 2);
    while(i < numsSize)
    {
        int j = i+1;
        while(j < numsSize)
        {
            if(nums[i] + nums[j] == target)
            {
                arr[0] = i;
                arr[1] = j;
                *returnSize = 2;
                return (arr);
            }
            j++;
        }
        i++;
    }
    return (NULL);
}