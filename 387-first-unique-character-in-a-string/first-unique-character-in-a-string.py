class Solution:
    def firstUniqChar(self, s: str) -> int:

        map = {}
        for i in range(len(s)):
            map[s[i]] = map.get(s[i],0) + 1

        for k,v in enumerate(s):
            if map[v] == 1:
                return k
        return -1

        