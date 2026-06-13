class Solution {
    public int[] twoSum(int[] nums, int target) {

        int [] result = {0,0};
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i = 0; i < nums.length; i++)
        {
            map.put(nums[i],i);
        }
        for(int i = 0; i < nums.length; i++)
        {
            int needed = target - nums[i];
            if(map.containsKey(needed) && map.get(needed) != i)
            {
                result[0] = map.get(needed);
                result[1] = i;
                return result;
            }
        }
        return result;
    }
}