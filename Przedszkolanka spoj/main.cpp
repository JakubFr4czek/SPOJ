#include <iostream>

using namespace std;

int funkcja()
{
    int a,b,c;

    cin>>a;
    cin>>b;

    if(a>b)
    {
        c=a;
        for(;;)
        {
            if(c%b==0)
            {
                cout<<c<<endl;
                return 0;
            }
            c+=a;
            //cout<<c<<endl;
        }
    }
    else if(a<b)
    {
        c=b;
        for(;;)
        {
            if(c%a==0)
            {
                cout<<c<<endl;
                return 0;
            }
            c+=b;
           // cout<<c<<endl;
        }
    }
    else if(a==b)
    {
        cout<<a<<endl;
        return 0;
    }

}

int main()
{
    int n;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        funkcja();
    }


    return 0;
}
