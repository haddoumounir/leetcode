class Solution:
    def firstUniqChar(self, s: str) -> int:
        
        seen = {}
        for c in s:
            seen[c] = seen.get(c,0) +1
        
        for k,v in enumerate(s):
            if(seen[v] == 1):
                return k
        
        return -1
