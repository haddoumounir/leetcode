class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer,Integer> seens = new HashMap<>();
        for(int i= 0; i < nums.length;i++)
            seens.put(nums[i],seens.getOrDefault(nums[i],0)+1);

        for (int i = 0; i < nums.length;i++)
        {
            if(seens.get(nums[i]) >1)
            {
                return true;
            }
        }
        return false;
    }
}