//
// Created by HONGLI on 2026/9/23.
//
#include <iostream>
#include <vector>

void setZeroes(std::vector<std::vector<int>>& matrix)
{
    // TODO: 核心算法
    bool row1_0 = false, col1_0 = false;
    for (int i = 0;i < matrix.size(); i++)
    {
        if (matrix[i][0] == 0)
        {
            row1_0 = true;
            break;
        }
    }
    for (int i = 0;i < matrix[0].size(); i++)
    {
        if (matrix[0][i] == 0)
        {
            col1_0 = true;
            break;
        }
    }
    for (int i = 1;i < matrix.size(); i++)
    {
        for (int j = 1;j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    for (int i = 1;i < matrix.size(); i++)
    {
        for (int j = 1;j < matrix[0].size(); j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
    if (row1_0)
    {
        for (int i = 0;i < matrix.size(); i++)
        {
            matrix[i][0] = 0;
        }
    }
    if (col1_0)
    {
        for (int i = 0;i < matrix[0].size(); i++)
        {
            matrix[0][i] = 0;
        }
    }
}

int main()
{
    int m{};
    int n{};
    std::vector<std::vector<int>> matrix;

    // TODO: 读取矩阵行数、列数和矩阵内容

    setZeroes(matrix);

    // TODO: 输出处理后的矩阵

    return 0;
}
