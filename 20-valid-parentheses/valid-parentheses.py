class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        ctp = {'}':'{',']':'[',')':'('}
        for c in s:
            if c in ctp:
                if stack and stack[-1] == ctp[c]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(c)
    
        return len(stack) == 0 