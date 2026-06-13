class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l = 0
        ml = 0
        map = set()
        
        for r in range(len(s)):
            while s[r] in map:
                map.remove(s[l])
                l+=1
            map.add(s[r])
            ml = max(ml, r -l +1)
        return ml