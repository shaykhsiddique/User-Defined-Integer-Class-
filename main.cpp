#include "point.h"

int main(){

    Point a(INTEGER(5), INTEGER(6)), b(INTEGER(10), INTEGER(20));
    Point c;


    c=a+b;

    c.Display();
    Point d=a-b;
    d.Display();
    if(c>d)
        cout<<"C is greater than d"<<endl;
    else
        cout<<"C is not greater than d"<<endl;
  return 0;
}
