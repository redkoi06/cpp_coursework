//
// Created by HONGLI on 2026/9/23.
//
#include <iostream>
#include <vector>

std::vector<std::vector<int>> move = {
    {0, 1, 1, 0, 0, 0},
    {1, 0, 0, 0, 0 ,-1},
    {0, -1, 0, -1, 0, 0},
    {-1, 0, 0, 0, 1, 0}
};

std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix)
{
    // TODO: 核心算法
    int m = matrix.size();
    int n = matrix[0].size();
    std::vector<int> result;
    int direction = 0;
    int x = 0, y = 0;
    int up_broad = 0, down_broad = m - 1, left_broad = 0, right_broad = n - 1;
    for (int i = 0;i < m * n; i++)
    {
        result.push_back(matrix[x][y]);
        if (x + move[direction][0] < up_broad || x + move[direction][0] > down_broad ||
            y + move[direction][1] < left_broad || y + move[direction][1] > right_broad)
        {
            up_broad += move[direction][2];
            down_broad += move[direction][3];
            left_broad += move[direction][4];
            right_broad += move[direction][5];
            direction = (direction + 1) % 4;
        }
        x += move[direction][0];
        y += move[direction][1];
    }
    return result;
}

int main()
{
    int m{};
    int n{};
    std::cin >> m >> n;

    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            std::cin >> matrix[i][j];

    std::vector<int> result = spiralOrder(matrix);

    for (std::size_t i = 0; i < result.size(); ++i) {
        if (i > 0) std::cout << ' ';
        std::cout << result[i];
    }
    std::cout << '\n';

    return 0;
}
