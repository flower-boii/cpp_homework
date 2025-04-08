#include <iostream>

void obmen1(int a, int b) // обмен через передачу по значению
{
    int c = a; //Сохраняем значение одной из переменных в c
    a = b; 
    b = c; //изменения внутри функции не влияют на исходные переменные a и b,  потому что параметры передаются по значению
}
void obmen2(int* a, int* b) // обмен через указатели
{
    int c = *a;
    *a = *b;
    *b = c;
}
void obmen3(int& a, int& b) // обмен через ссылки
{
    int c = a;
    a = b;
    b = c;
}
void main(void)
{
    setlocale(LC_ALL, "Russian_Russia.1251");
    int a = 2, b = 5;
    std::cout << "До обмена: a= " << a << ", b = " << b;
    obmen1(a, b);
    std::cout << ". После обмена 1: a= " << a << ", b= " << b;
    obmen2(&a, &b);
    std::cout << ". После обмена 2: a= " << a << ", b= " << b;
    obmen3(a, b);
    std::cout << ". После обмена 3: a= " << a << ", b= " << b;
}


