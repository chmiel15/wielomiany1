#include "wielomiany.h"

wielomian::wielomian()
{
    A= new int;
    *A=0;
    B= new int;
    *B=0;
    C=new int;
    *C=0;
}
wielomian::wielomian(int *a)
{
    A= new int;
    *A=*a;
    B= new int;
    *B=*(a+1);
    C=new int;
    *C=*(a+2);
}
wielomian::wielomian(const wielomian & w)
{
    A= new int;
    *A=*w.A;
    B= new int;
    *B=*w.B;
    C=new int;
    *C=*w.C;
}
wielomian::~wielomian()
{
 delete A;
 delete B;
 delete C;
}
void wielomian::operator=(wielomian & w)
{
*A=*(w.A);
*B=*(w.B);
*C=*(w.C);
}
ostream & operator<<(ostream & os, wielomian & w)
{
os<<*(w.A)<<"(x^2)+"<<*w.B<<"x+"<<*w.C;
return os;
}
wielomian wielomian::operator+(wielomian & w)
{
int tab[3];
tab[0]=*(w.A)+*A;
tab[1]=*(w.B)+*B;
tab[2]=*(w.C)+*C;
wielomian temp(tab);
return temp;
}
void wielomian::operator+=(wielomian &w)
{
*A+=*(w.A);
*B+=*(w.B);
*C+=*(w.C);
}
wielomian wielomian::operator-(wielomian & w)
{
int tab[3];
tab[0]=*A-*(w.A);
tab[1]=*B-*(w.B);
tab[2]=*C-*(w.C);
wielomian temp(tab);
return temp;
}
void wielomian::operator-=(wielomian & w)
{
*A-=*(w.A);
*B-=*(w.B);
*C-=*(w.C);
}
void wielomian::rozniczkowanie(int a)
{
*C=*B;
*B=*A*2;
*A=0;
}
void wielomian::pierwiastki(int a)
{
double x1, x2;
double Rex1, Rex2, Imx1, Imx2;
int delta;
double sqrt_delta;
delta=(*B)*(*B)-4*(*A)*(*C);
sqrt_delta=sqrt(fabs(delta));
if(*A!=0) //rownanie kwadratowe
{
    if(delta>=0)//pierwiastki rzeczywiste
    {
    x1=(-*B-sqrt_delta)/(2**A);
    x2=(-*B+sqrt_delta)/(2**A);
    cout<<"pierwiastkami wielomianu sa:"<<endl;
    cout<<"x1="<<x1<<endl;
    cout<<"x2="<<x2<<endl;
    }
    else //pierwiastki zespolone
    {
    Rex1=-*B/(2**A);
    Imx1=-sqrt_delta/(2**A);
    Rex2=Rex1;
    Imx2=-Imx1;
    cout<<"zespolonymi pierwiastkami wielomianu sa:"<<endl;
    cout<<"x1="<<Rex1<<"+i*"<<Imx1<<endl;
    cout<<"x2="<<Rex2<<"+i*"<<Imx2<<endl;
    }
}
else if (*A==0 && *B !=0) //rownanie liniowe
{
x1=-(1.0)*(*C)/(*B);
cout<<"pierwiastkiem wielomianu jest:"<<endl;
cout<<"x1="<<x1<<endl;
}
else // stala
{
cout<<"wielomian w postaci stalej- brak pierwistkow wielomianu"<<endl;
}

}
