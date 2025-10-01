class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        D = {}
        for x in nums :
            if x not in D :
                D[x] = 1
            else :
                D[x] += 1
        return max(D, key = lambda x : D[x])