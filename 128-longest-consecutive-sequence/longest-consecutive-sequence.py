class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        mySet = set(nums)
        longest = 0
        for n in mySet:
            l = 0
            if(n -1 not in mySet):
                while(n + l in mySet):
                    l+=1
            longest = max(longest,l)

        
        return longest
                
