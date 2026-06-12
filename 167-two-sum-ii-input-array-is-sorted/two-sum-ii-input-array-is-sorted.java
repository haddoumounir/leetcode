class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int [] result = {0,0};
        int l = 0, r = numbers.length-1;
        while (l < r)
        {
            int sum = numbers[l] + numbers[r];
            if(target == sum)
            {
                result[0] = l+1;
                result[1] = r+1;
                return result;
            }
            else if(sum > target)
                r--;
            else
                l++;
        }
        return result;
    }
}