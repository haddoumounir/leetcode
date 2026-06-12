class Solution {
    public int[] twoSum(int[] nums, int target) {
        int arr[] = {0,0};
    
        for(int i = 0; i < nums.length; i ++)
            {
                for(int i2 = i+1; i2 < nums.length; i2++)
                {
                    if(nums[i] + nums[i2] == target)
                    {
                        arr[0] = i;
                        arr[1] = i2;
                        return arr;
                    }
                }
            }

        return arr;
    }
}