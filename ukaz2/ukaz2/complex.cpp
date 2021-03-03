#include "complex.h"
#include <cmath>
#include <iostream>

using namespace std;

void print(double r, double i)
{
    cout << r << "+" << i << "i" << endl;
}
void input(double& r, double& i)
{
    cin >> r >> i;
}
double ads(double r, double i)
{
    return sqrt(r * r + i * i);
}
void add(double r1, double i1, double r2, double i2, double& r, double& i)
{
    r = r1 + r2;
    i = i1 + i2;
}
void mul(double r1, double i1, double r2, double i2, double& r, double& i)
{
    r = r1 * r2 - i1 * i2;
    r = r1 * i2 + i1 * r2;
}
void conj(double r1, double i1, double& r, double& i)
{
    r = r1;
    i = -i1;
}
void div(double r1, double i1, double t, double& r, double& i)
{
    r = r1 / t;
    i = i1 / t;
}
void div(double r1, double i1, double r2, double i2, double& r, double& i)
{
    double tr, ti, nr, ni, dr, di;
    conj(r2, i2, tr, ti);
    mul(r1, i1, tr, ti, nr, ni);
    mul(r2, i2, tr, ti, dr, di);
    div(nr, ni, dr, r, i);
}