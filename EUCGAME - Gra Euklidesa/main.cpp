#include <iostream>

using namespace std;

void funkcja()
{
    int a,b;

    cin>>a; cin>>b;

    while(a!=b)
    {
        if(a<b)
            b-=a;
        else if(b<a)
            a-=b;
    }
    cout<<a+b<<endl;
}


int main()
{
    int n; //pary

    cin>>n;

    for(int i=0; i<n; i++)
    {
        funkcja();
    }



    return 0;
}
