//
// Created by HONGLI on 2026/10/12.
//
#include <iostream>
#include <vector>

bool isValidSudoku(const std::vector<std::vector<char>>& board)
{
    // TODO: 核心算法
    bool rows[9][9] = {};
    bool cols[9][9] = {};
    bool boxes[9][9] = {};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == '.') continue;
            int num = board[i][j] - '1';
            int box_index = (i / 3) * 3 + j / 3;
            if (rows[i][num] || cols[j][num] || boxes[box_index][num])
            {
                return false;
            }
            rows[i][num] = true;
            cols[j][num] = true;
            boxes[box_index][num] = true;
        }
    }
    return true;
}

int main()
{
    std::vector<std::vector<char>> board;

    // TODO: 读取 9×9 board
    // TODO: 调用 isValidSudoku
    // TODO: 输出结果

    return 0;
}