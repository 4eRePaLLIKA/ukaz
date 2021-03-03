#include "min1.h"
#include "min.h"
#include <iostream>
using namespace std;
int min1(int a, int b, int c)
{
	return min2(min2(a, b), c);

}