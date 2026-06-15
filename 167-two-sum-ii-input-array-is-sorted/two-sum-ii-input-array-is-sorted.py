class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        r = len(numbers)-1
        l = 0
        while(l < r):
            sum = numbers[r] + numbers[l]
            if(target == sum):
                return[l+1,r+1]
            elif (sum < target):
                l+=1
            else:
                r-=1

        return[0,0]