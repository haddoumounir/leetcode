class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        seen = {}
        for i in range(len(nums)):
            seen[nums[i]] = seen.get(nums[i],0) +1

        pair = []
        for n in seen:
            pair.append([seen[n],n])
        
        pair.sort(reverse=True)

        result = []

        for n in range(k):
            result.append(pair[n][1])

        return result