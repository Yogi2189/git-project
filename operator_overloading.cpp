#include <iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(int r , int i)
    {
        real = r;
        imag = i;
    }
    void print()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

    complex operator +(complex c)
    {
        complex yogi;
        yogi.real=real+c.real;
        yogi.imag=imag+c.imag;
        return yogi ;
    }
};
int main() {
    complex c1(5,4);
    complex c2(2,6);
    complex c3(1,1);
    complex c4(8,9);
    complex c5;
    c5=c1+c2+c3+c4;
  
    c5.print();
 int x=5; 
 int y=8;
 int z = x+y;
  
 cout<<"z value is "<<z<<endl;
    return 0;
}