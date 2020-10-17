#include <iostream>

using namespace std;

int func()
{

    string a;
    int b=0;

    cin>>a;

    for(int i=0; i<a.length(); i++)
    {
        if(a[i]==a[i+1])
          b++;
        else if(a[i]!=a[i+1] && b>1)
        {
            cout<<a[i-1]<<b+1;
            b=0;
        }
        else if(a[i]!=a[i+1] && b==1)
        {
            cout<<a[i-1]<<a[i-1];
            b=0;
        }
        else if(a[i]!=a[i+1])
        {
            cout<<a[i];
        }
    }
    cout<<endl;
    return 0;


}


int main()
{
    int n;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        func();
    }



    return 0;
}
