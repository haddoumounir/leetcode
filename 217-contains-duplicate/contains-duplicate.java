class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer,Integer> seens = new HashMap<>();
        for(int i= 0; i < nums.length;i++)
        {
            if(seens.getOrDefault(nums[i],0) >=1)
                return true;
            seens.put(nums[i],seens.getOrDefault(nums[i],0)+1);
        }
        return false;
    }
}