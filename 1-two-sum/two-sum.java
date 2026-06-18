class Solution {
    public int[] twoSum(int[] nums, int target) {
        int []result = {0,0};

        HashMap<Integer,Integer> seens = new HashMap<>();

        for (int i = 0; i < nums.length; i++)
        {
            seens.put(nums[i],i);
        }
        for (int i = 0; i < nums.length;i++)
        {
            int needed = target - nums[i];
            if(seens.containsKey(needed)  && seens.get(needed) != i)
            {
                result[0] = seens.get(needed);
                result[1] = i;
                return result;
            }
        }
        return result;
    }
}