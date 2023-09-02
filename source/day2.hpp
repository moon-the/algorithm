#pragma once
#include <iomanip>
#include <iostream>

namespace day2
{
void ex1(int n)
{
    float sum1 = 0;
    float sum2 = 0;
    if (n != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            sum1 += (float)1 / i;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        sum2 += (float)1 / (2 * i + 1);
    }
    std::cout << std::fixed << std::setprecision(2) << "S1 = " << sum1 << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "S2 = " << sum2;
}

void ex2(int n)
{
    float sum1 = 0;
    float sum2 = 0;
    if (n != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            sum1 += (float)1 / (i * (i + 1));
            sum2 += (float)i / (i + 1);
        }
    }
    std::cout << std::fixed << std::setprecision(2) << "S1 = " << sum1 << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "S2 = " << sum2;
}

void ex3(int n)
{
    float sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += (float)(2 * n + 1) / (2 * n + 2);
    }
    std::cout << std::fixed << std::setprecision(2) << sum;
}

void ex4(int x, int n)
{
    for (int i = 1; i <= n / x; i++)
    {
        if ((x * i) <= n)
        {
            std::cout << x * i << ' ';
        }
    }
}

void ex5(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
    }
}
} // namespace day2