class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        minprice=prices[0]
        maxprofit=0

        for a in prices:
            minprice=min(a,minprice)
            maxprofit=max(maxprofit,a-minprice)
        return maxprofit

        