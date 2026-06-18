class Solution {
    public int search(int[] nums, int target) {

        int l = 0;
        int r = nums.length-1;
        while(l <= r)
        {
            int med = (l+r)/2;
            if(nums[med] == target)
                return med;
            if(nums[med] < target)
                l++;
            else
                r--;

        }
        return -1;
    }
}