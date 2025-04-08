#include <iostream>
#include <stdio.h>
#define PR(x) printf ("x=%u, *x=%d, &x=%u\n",x,*x,&x)

void main(void)
{
    int mas[] = { 100,200,300 };
    int *ptr1, *ptr2;
    ptr1 = mas; //ссылка на первый элемент массива
    ptr2 = &mas[2]; //ссылка на второй элемент массива

    PR(ptr1);
    ptr1++; // Увеличение адреса, на который ссылается ptr1 (переходит к следующему элементу массива)
    PR(ptr1);

    PR(ptr2);
    ++ptr2;
    printf("ptr2-ptr1=%u\n", ptr2 - ptr1); //вывод разности между ptr2 и ptr1

}

