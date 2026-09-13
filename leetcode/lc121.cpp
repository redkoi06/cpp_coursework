//
// Created by HONGLI on 2026/9/13.
//

#include <iostream>
#include <vector>

class Solution
{
public:
    int maxProfit(std::vector<int>& prices)
    {
        // 在这里写
        int n = prices.size();
        int max = 0;
        if (n == 1) return 0;
        int lowest = prices[0];
        for (int i = 1;i < prices.size(); i++)
        {
            if (prices[i] - lowest > max)
            {
                max = prices[i] - lowest;
            }
            if (prices[i] < lowest) lowest = prices[i];
        }
        return max;
    }
};

int main()
{
    Solution solution;

    std::vector<int> prices = {7, 1, 5, 3, 6, 4};

    std::cout << solution.maxProfit(prices) << '\n';

    return 0;
}