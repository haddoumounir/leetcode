class Solution {
    public int search(int[] nums, int target) {

        if(nums.length == 0)
            return -1;
        // if(nums.length == 1)
        //     if(nums[0] == target)
        //         return 0;
        //     else
        //         return -1;
        int r = nums.length -1;
        int l = 0;
        while (l <=r)
        {
            if(nums[l] == target)
                return l;
            else if(nums[r] == target)
                return r;
            r--;
            l++;

        }
        return -1;
    }
}