#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a;
    vector <int> b;

    while(cin>>a)
    {
        b.push_back(a);
    }
    for(int i=b.size()-1; i>=0; i--)
    {
        cout<<b[i]<<" ";
    }



    return 0;
}
