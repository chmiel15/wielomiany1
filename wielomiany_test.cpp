#include <iostream>
#include "wielomiany.h"

using namespace std;

int main()
{

  cout<<"wielomian domyslny \"a\":"<<endl;
  wielomian a,d;
  cout<<a<<endl;

  int y[3]={2,4,6};
  int x[3]={1,5,4};

  wielomian b(&y[0]);
  cout<<"utworzono wielomian \"b\" o wspolczynnikach: 2,4,6"<<endl;
  cout<<b<<endl;
  wielomian c(&x[0]);

  cout<<"utworzono wielomian \"c\" o wspolczynnikach: 1,5,4"<<endl;
  cout<<c<<endl;

  cout<<"przypisanie wielomianu \"c\" do wielomianu \"a\""<<endl;
  a=c;
  cout<<"Teraz wielomian a="<<a<<endl;

  cout<<"dodawanie wielomianow:(operator+)"<<endl;
  wielomian e(a+b);
  cout<<"["<<a<<"]+["<<b<<"]="<<e<<endl;

  cout<<"odejmowanie wielomianow:(operator-)"<<endl;
  wielomian f(a-b);
  cout<<"["<<a<<"]-["<<b<<"]="<<f<<endl;

  cout<<"dodawanie wielomianow: (operator+=)"<<endl;
  cout<<"["<<a<<"]+=["<<b<<"]=";
  a+=b;
  cout<<a<<endl;

  cout<<"odejmowanie wielomianow: (operator-=)"<<endl;
  cout<<"["<<a<<"]-=["<<b<<"]=";
  a-=b;
  cout<<a<<endl;

  cout<<"rozniczkowanie wielomianu \"c\": \n"<<c<<endl;
  c.rozniczkowanie();
  cout<<c<<endl;

  cout<<"pierwiastki wielomianu \"b\": "<<b<<endl;
  b.pierwiastki();

  cout<<"pierwiastki wielomianu \"c\": "<<c<<endl;
  c.pierwiastki();

  cout<<"pierwiastki wielomianu \"a\": "<<a<<endl;
  a.pierwiastki();
getchar();
return 0;
}
