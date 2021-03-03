#include "complex.h"
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    double ra, ia, rb, ib, r, i;

    cout << "Введите комплексное число:";
    input(ra, ia);
    input(rb, ib);

    cout << "Сложение";
    add(ra, ia, rb, ib, r, i);
    print(r, i);

    cout << "Произведение:";
    mul(ra, ia, rb, ib, r, i);
    print(r, i);

    cout << "Деление";
    div(ra, ia, rb, ib, r, i);
    print(r, i);

    return EXIT_SUCCESS;
}

