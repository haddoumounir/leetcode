class Solution {
    public int maxProfit(int[] prices) {

        int pm = 0;
        int pl = prices[0];

        for(int i = 0; i < prices.length;i++)
        {
            if(prices[i] < pl)
                pl = prices[i];
            else
                pm = Math.max(pm,prices[i]-pl);
        }
        return pm;
    }
}