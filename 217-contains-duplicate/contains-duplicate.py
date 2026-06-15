class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:

        data = set()
        for i in range(len(nums)):
            if(data and nums[i] in data):
                return True
            else:
                data.add(nums[i])

        
        return False