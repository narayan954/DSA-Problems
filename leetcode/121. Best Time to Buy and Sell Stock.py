class Solution:

    @staticmethod
    def maxProfit(prices: List[int]) -> int:
        max_profit, min_price = 0, float("inf")
        for price in prices:
            min_price = min(min_price, price)
            estimate = price - min_price
            max_profit = max(max_profit, estimate)
        return max_profit
