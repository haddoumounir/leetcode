class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        
        seens = {}

        for i in range(len(nums)):
            seens[nums[i]] = seens.get(nums[i],0)+1

        for i in range(len(nums)):
            if(seens[nums[i]] > len(nums)/2):
                return nums[i]
        
        return -1