class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seens = {}

        for i,k in enumerate(nums):
            if target - nums[i] in seens and seens[target - nums[i]] != i:
                return[seens[target - nums[i]],i]
            else:
                seens[k] = i

        return[0,0]
        