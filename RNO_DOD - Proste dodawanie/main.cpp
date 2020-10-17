#include <iostream>

using namespace std;

int funkcja()
{
    int n,a=0,b;
    cin>>n;

    for(int i=0; i<n; i++)
    {

        cin>>b;
        a+=b;

    }
    cout<<a<<endl;
    return 0;

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
