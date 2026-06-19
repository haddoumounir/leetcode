class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        seens = {}

        for i in range(len(nums)):
            seens[nums[i]] = seens.get(nums[i],0) + 1

        pair = []

        for n in seens:
            pair.append([seens[n],n])
        pair.sort(reverse=True)
        result = []
        for i in range(k):
            result.append(pair[i][1])


        return result