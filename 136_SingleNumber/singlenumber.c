int singleNumber(int* nums, int numsSize) 
{
    int i = 0;

    while(i < numsSize)
    {
        int j = 0;
        int flag = 0;
        while(j < numsSize)
        {
            if(nums[i] == nums[j] && j != i)
            {
                flag = 1;
                break;
            }
            j++;
        }
        if(!flag)
            return (nums[i]);
        i++;
    }
    return (0);
}