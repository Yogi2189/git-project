#include<iostream>
using namespace std;
  
  class alok{
      public:
      /*int a,b;
      float c,d;*/
     public:
       
      void add(int a, int b)
      {
          
          cout<<"addition of two number is "<<a+b<<endl;
      }
        void add( float c, double d)
        {
           
            cout<<" addition of two numbner is "<<c+d<<endl;
        }

  };
  int main()
  {
      alok c1;
      c1.add( 4.8, 4.5);
      c1.add(4,5);

  }

