class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}
        for i,v in enumerate(nums):
            needs = target - nums[i]
            if needs in map and map.get(needs) != i:
                return [map.get(needs),i]
            else:
                map[v] = i
        return