#include <iostream>

void obmen1(int a, int b) // ����� ����� �������� �� ��������
{
    int c = a; //��������� �������� ����� �� ���������� � c
    a = b; 
    b = c; //��������� ������ ������� �� ������ �� �������� ���������� a � b,  ������ ��� ��������� ���������� �� ��������
}
void obmen2(int* a, int* b) // ����� ����� ���������
{
    int c = *a;
    *a = *b;
    *b = c;
}
void obmen3(int& a, int& b) // ����� ����� ������
{
    int c = a;
    a = b;
    b = c;
}
void main(void)
{
    setlocale(LC_ALL, "Russian_Russia.1251");
    int a = 2, b = 5;
    std::cout << "�� ������: a= " << a << ", b = " << b;
    obmen1(a, b);
    std::cout << ". ����� ������ 1: a= " << a << ", b= " << b;
    obmen2(&a, &b);
    std::cout << ". ����� ������ 2: a= " << a << ", b= " << b;
    obmen3(a, b);
    std::cout << ". ����� ������ 3: a= " << a << ", b= " << b;
}


