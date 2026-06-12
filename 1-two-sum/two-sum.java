class Solution {
    public int[] twoSum(int[] nums, int target) {

      int []result = {0,0};
      HashMap<Integer,Integer> map = new HashMap<>();
     
        int needs ;
        for(int i = 0; i < nums.length;i++)
      {
          needs = target - nums[i];
          if(map.containsKey(needs) && map.get(needs) != i)
          {
              result[0] = map.get(needs);
              result[1] = i;
              return result;
          }
          else
              map.put(nums[i],i);
      }
        return result;
    }
    }
