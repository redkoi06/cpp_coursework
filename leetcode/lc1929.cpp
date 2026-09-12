//
// Created by HONGLI on 2026/9/12.
//

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>& nums) {
        // TODO: 在这里写你的代码
        int n = nums.size();
        std::vector<int> res(2 * n);
        for (int i = 0;i < n;i++)
        {
            res[i] = res[i + n] = nums[i];
        }
        return res;
    }
};

int main() {
    std::vector<int> nums = {1, 2, 1};

    Solution solution;
    std::vector<int> result = solution.getConcatenation(nums);

    for (int x : result) {
        std::cout << x << ' ';
    }
    std::cout << '\n';

    return 0;
}