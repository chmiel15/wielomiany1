#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <cstdbool>
#include <cmath>
#include <stdio.h>
using namespace std;

class wielomian
{
private:
    int * A;
    int * B;
    int * C;
public:
    wielomian();
    wielomian(int *a);
    wielomian(const wielomian & w);
    ~wielomian();
    void operator=(wielomian & w);
    friend ostream & operator<<(ostream & os, wielomian & w);
    wielomian operator+(wielomian & w);
    void operator+=(wielomian &w);
    wielomian operator-(wielomian & w);
    void operator-=(wielomian & w);
    void pierwiastki(int a=0);
    void rozniczkowanie(int a=0);
};


