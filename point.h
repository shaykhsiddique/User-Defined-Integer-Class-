#include "integer.h"
class Point{
    INTEGER x;
    INTEGER y;
public:
    Point(INTEGER k, INTEGER l):x(k), y(l){ };
    Point():x(0), y(0){ };
    ~Point(){ };
    void Display(){cout<< "X= "<< x.get_value()<< " Y= " << y.get_value()<< endl;}
    Point operator+(Point a){
        Point temp;
        temp.x=x+a.x;
        temp.y=y+a.y;
        return temp;
    }
    Point operator-(Point a){
        Point temp;
        temp.x=x-a.x;
        temp.y=y-a.y;
        return temp;
    }
    bool operator>(Point p){
            INTEGER k=(x*x)+(y*y);
            k=k.P_sqrt();
            INTEGER l=(p.x*p.x)+(p.y*p.y);
            l=l.P_sqrt();
            if(k>l)
                return true;
            else
                return false;
        }


    bool operator<(Point a){
        INTEGER k=(x*x)+(y*y);
            k=k.P_sqrt();
            INTEGER l=(a.x*a.x)+(a.y*a.y);
            l=l.P_sqrt();
            if(k<l)
                return true;
            else
                return false;
        }


   /* INTEGER Distance(Point f){
        INTEGER k=(x*f.x)+(y*y.y);
        INTEGER j=k.P_sqrt();
        return j;
    }*/
};
