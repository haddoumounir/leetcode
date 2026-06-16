class Solution {
    public int search(int[] nums, int target) {
        int r = nums.length -1;
        int l = 0;

        while(l <= r)
        {
            int med = (l+r) / 2;
            if(nums[med] == target)
                return med;
            else if(nums[med] < target)
                l = med+1;
            else
                r = med-1;
        }
        return -1;
    }
}