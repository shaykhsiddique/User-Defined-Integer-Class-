#include<bits/stdc++.h>
using namespace std;

class INTEGER{
    int value;
public:
    INTEGER(int x):value(x){ };
    INTEGER():value(0){ };
    ~INTEGER(){ };
    int get_value(){return value;}

    INTEGER operator+(INTEGER a){
        return INTEGER(value+a.value);
    }
    INTEGER operator-(INTEGER a){
        return INTEGER(value-a.value);
    }
    INTEGER operator*(INTEGER a){
        return INTEGER(value*a.value);
    }
    double operator/(INTEGER a){
        return (value/(double)a.value);
    }
    bool operator>(INTEGER a){
        if(value>a.value)
            return true;
        else
            return false;
    }
    bool operator<(INTEGER a){
        if(value<a.value)
            return true;
        else
            return false;
    }
    bool operator>=(INTEGER a){
        if(value>=a.value)
            return true;
        else
            return false;
    }
    bool operator<=(INTEGER a){
        if(value<=a.value)
            return true;
        else
            return false;
    }
    bool operator==(INTEGER a){
        if(value==a.value)
            return true;
        else
            return false;
    }
    bool operator!=(INTEGER a){
        if(value!=a.value)
            return true;
        else
            return false;
    }
    void operator+=(INTEGER a){
        value+=a.value;
    }
    void operator-=(INTEGER a){
        value-=a.value;
    }
    void operator*=(INTEGER a){
        value*=a.value;
    }

    void operator/=(INTEGER a){
        value/=a.value;
    }

    INTEGER operator++(){
        ++value;
        return INTEGER(value);
    }
    INTEGER operator--(){
        --value;
        return INTEGER(value);
    }
    INTEGER operator++(int){
        value++;
        return INTEGER(value);
    }
    INTEGER operator--(int){
        value--;
        return INTEGER(value);
    }
    double P_sqrt(){
        return sqrt(value);

    }
    INTEGER operator%(INTEGER a){
        return INTEGER(value%a.value);
    }

};
