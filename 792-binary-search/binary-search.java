class Solution {
    public int search(int[] nums, int target) {
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