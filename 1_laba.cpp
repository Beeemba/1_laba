#include <iostream>
#include <stdlib.h>
#include <ctime>

void fillArray(int(&arr)[10])
{
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = std::rand()%100;
    }
}

void printArray(const int (&arr)[10])
{
     for (auto x:arr)
     {
        std::cout<<x<<" ";
     }
     std::cout<<"\n";
}

void swapElements(int(&arr)[10], int i1, int i2)
{
    if (i1 >= 0 && i1 < 10 && i2 >= 0 && i2 < 10)
    {
        int temp = arr[i1];
        arr[i1] = arr[i2];
        arr[i2] = temp;
    }
    else {
        std::cout << "Ошибка! Индекс выходит за границы массива.";
    }
}
void multiplyByTwo(int (&arr)[10])
{
    for(int& x:arr)
    {
        x*=2;
    }
}
int main()
{
    int Arr[10];
    fillArray(Arr);
    std::cout << "Исходный массив:";
    printArray(Arr);

    swapElements(Arr, 2, 9);
    std::cout <<"После замены:";
    printArray(Arr);

    multiplyByTwo(Arr);
    std::cout<<"После умножения на 2:";
    printArray(Arr);

    return 0;
}