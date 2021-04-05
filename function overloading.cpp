#include<iostream>
using namespace std;
    
    int sum(int, int);
    float sum(float ,float);
    float sum(int ,float);
    int main()
    {
        int a,b,c;
        float d,e,f;


        cout<<"enter two integer number "<<endl;
        cin>>a>>b;
   cout<<"result is "<<sum(a,b)<<endl;
        cout<<"enter two floating number "<<endl;
        cin>>d>>e;
    cout<<"result is "<<sum(d,e)<<endl;
        cout<<"eneter one integer number and one floating number"<<endl;
        cin>>c>>f;
        cout<<"result is "<<sum(c,f)<<endl;
        return 0;

    }
    int sum(int a,int b)
    {
        return a+b;
    }
    float sum( float p, float q)
    {
        return p+q;
    }
    float sum(int m, float n)
    {
        return m+n;
    }