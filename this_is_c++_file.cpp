#include<iostream>
using namespace std;
class add{
    public:
    int a,b;
    public:
    add()
    {
        a=0;
        b=0;
       
    }
    add(int x , int y)
    {
        a = x;
        b =y;
        x+y;
    }
    void print()
    {
        cout<<a+b<<endl;
    }

    add operator +(add c)
    {
        add yogi;
        yogi.a= a+c.a;
        yogi.b= b+c.b;
        
        return yogi ;
    }
};
int main() {
    add c1(5,10);
    add c2(2,8);
    
    add c3;
    c3=c1+c2;
    c3.print();
    cout<<endl;
 int x=5; 
 int y=8;
 int z = x+y;
 cout<<"z value is "<<z<<endl;
    return 0;
}