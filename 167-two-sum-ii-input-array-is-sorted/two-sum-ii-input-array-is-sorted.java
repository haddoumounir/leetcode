class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int[] result = {0, 0};

        int r = numbers.length -1;
        int l = 0;
        while (l < r)
        {
            int sum = numbers[l] + numbers[r];

            if(sum == target)
            {
                result[0] = l+1;
                result[1] = r+1;
                return result;
            }
            if(sum > target)
                r--;
            else
                l++;

        }
        return result;
    }
}