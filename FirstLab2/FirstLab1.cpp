#include <iostream>


void main(void)
{
    setlocale(LC_ALL, "Russian_Russia.1251");
    int i, k, number;
    int power(int, int);
    std::cout << "¬ведите число дл€ возведени€ его в степень: ";
    std::cin >> number; //ввод числа 
    for (i = 0;i < 10;i++)
    {
        k = power(number, i);
        std::cout << "i = " << i << ", k = " << k << ", ";
    }
}
int power(int x, int n) // вычисление числа x в степени n
{
    int i, p = 1;
    for (i = 1;i <= n;i++) p *= x;
    return p;
}
