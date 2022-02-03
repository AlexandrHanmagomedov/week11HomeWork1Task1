/*
Задание 1. Написать функцию, которая принимает два параметра:
основание степени и показатель степени, и вычисляет степень числа на основе полученных данных.
*/
#include <iostream>
using namespace std;

int stepen4isla(int a, int b)
{
    int otv = 1;
    for (int i = 0; i < b; i++)
    {
        otv *= a;
    }
    return otv;
}
void main()
{
    int a, b;
    cout << "Vvedite 4islo ";
    cin >> a;
    cout << "Vvedite stepen` ";
    cin >> b;
    cout << "4islo  " << a << "  v stepeni  " << b << " = " << stepen4isla(a, b);
}