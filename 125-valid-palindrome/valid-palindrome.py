class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        tmp = ""
        for i in range(len(s)):
            if(s[i].isalnum()):
                tmp+=s[i]
        r = len(tmp) -1
        l = 0
        while(l < r):
            if tmp[r] != tmp[l]:
                return False
            l+=1
            r-=1
        return True
       