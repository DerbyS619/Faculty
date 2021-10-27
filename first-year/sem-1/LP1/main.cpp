#include<iostream>

using namespace std;

int sub(int x)
{
    int d;
    int a=1,b=1,c;
    while(b<x)
    {
        c=a+b;
        a=b;
        b=c;
        if(c<=x)
            d=c;
    }
    return d;
}

int main()
{
    int nr; cin>>nr;
    cout<<sub(nr);

    return 0;
}
