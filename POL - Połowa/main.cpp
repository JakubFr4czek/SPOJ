#include <iostream>

using namespace std;

void string_cutter()
{
    string a;
    cin>>a;
    for(int i=0; i<a.length()/2; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string_cutter();
    }
    return 0;
}
