class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        ctp = {']':'[','}':'{',')':'('}

        for i in range(len(s)):
            if s[i] in ctp:
                if stack and stack[-1] == ctp[s[i]]:
                    stack.pop()
                else:
                    return False
            
            else:
                stack.append(s[i])
        
        return len(stack) == 0
        