#pragma once
#include <iostream>

namespace algo
{

// bai 1
void ex1(int n)
{
    for (int i = 0; i < n; i++)
        std::cout << "Chao ban!" << '\n';
}

// bai 2
void ex2(int dad, int son)
{
    std::cout << dad - 2 * son;
}

// bai3
void ex3(int x, int y)
{
    y = y * 1000;
    int d = 0;
    while (x < y)
    {
        x = x * 2;
        d++;
    }
    std::cout << d;
}

// bai 4
bool ex4(int n)
{
    // 2: 0010 => 0010 - 1 = 0001
    // 4: 0100 => 0100 - 1 = 0011
    return !(n & (n - 1));
}

// bai 5
void ex5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        std::cout << i << '\n';
    }
}

// bai 6
void ex6(int n)
{
    for (int i = n; i > 0; i--)
    {
        std::cout << i << '\n';
    }
}

// bai 7
void ex7(int n)
{
    if (n != 0)
    {
        for (int i = 2; i <= 2 * n; i += 2)
        {
            std::cout << i << ' ';
        }
    }
    std::cout << '\n';
    for (int i = 1; i <= 2 * n + 1; i += 2)
    {
        std::cout << i << ' ';
    }
}

// bai 8
void ex8(int n)
{
    int sum1 = 0;
    int sum2 = 1;
    int sum3 = 0;
    for (int i = 1; i <= n; i++)
    {
        sum1 += i;
        sum2 *= i;
        sum3 += i * i;
    }
    std::cout << "S1 = " << sum1 << "\nS2 = " << sum2 << "\nS3 = " << sum3;
}
} // namespace algo
