class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        pl = prices[0]
        pm = 0

        for p in prices:
            if(p < pl):
                pl = p
            else:
                pm = max(pm, p - pl)
        
        return pm